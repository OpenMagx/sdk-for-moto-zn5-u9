// based on QMemArray


#ifndef ZMEMARRAY_H
#define ZMEMARRAY_H

#include "qgarray.h"

template<class type>
class ZMemArray : public QGArray
{
public:
    enum Optimization { MemOptim, SpeedOptim };
    
    typedef type* Iterator;
    typedef const type* ConstIterator;
    typedef type ValueType;

protected:
    ZMemArray( int, int ) : QGArray( 0, 0 ) {}

public:
    ZMemArray() {}
    ZMemArray( int size ) : QGArray(size*sizeof(type)) {}
    ZMemArray( const ZMemArray<type> &a ) : QGArray(a) {}
   ~ZMemArray() {}
    ZMemArray<type> &operator=(const ZMemArray<type> &a)
				{ return (ZMemArray<type>&)QGArray::assign(a); }
    type *data()    const	{ return (type *)QGArray::data(); }
    uint  nrefs()   const	{ return QGArray::nrefs(); }
    uint  size()    const	{ return QGArray::size()/sizeof(type); }
    uint  count()   const	{ return size(); }
    bool  isEmpty() const	{ return QGArray::size() == 0; }
    bool  isNull()  const	{ return QGArray::data() == 0; }
    bool  resize( uint size )	{ return QGArray::resize(size*sizeof(type)); }
    bool  resize( uint size, Optimization optim ) { return QGArray::resize(size*sizeof(type), optim); }
    bool  truncate( uint pos )	{ return QGArray::resize(pos*sizeof(type)); }
    bool  fill( const type &d, int size = -1 )
	{ return QGArray::fill((char*)&d,size,sizeof(type) ); }
    void  detach()		{ QGArray::detach(); }
    ZMemArray<type>   copy() const
	{ ZMemArray<type> tmp; return tmp.duplicate(*this); }
    ZMemArray<type>& assign( const ZMemArray<type>& a )
	{ return (ZMemArray<type>&)QGArray::assign(a); }
    ZMemArray<type>& assign( const type *a, uint n )
	{ return (ZMemArray<type>&)QGArray::assign((char*)a,n*sizeof(type)); }
    ZMemArray<type>& duplicate( const ZMemArray<type>& a )
	{ return (ZMemArray<type>&)QGArray::duplicate(a); }
    ZMemArray<type>& duplicate( const type *a, uint n )
	{ return (ZMemArray<type>&)QGArray::duplicate((char*)a,n*sizeof(type)); }
    ZMemArray<type>& setRawData( const type *a, uint n )
	{ return (ZMemArray<type>&)QGArray::setRawData((char*)a,
						     n*sizeof(type)); }
    void resetRawData( const type *a, uint n )
	{ QGArray::resetRawData((char*)a,n*sizeof(type)); }
    int	 find( const type &d, uint i=0 ) const
	{ return QGArray::find((char*)&d,i,sizeof(type)); }
    int	 contains( const type &d ) const
	{ return QGArray::contains((char*)&d,sizeof(type)); }
    void sort() { QGArray::sort(sizeof(type)); }
    int  bsearch( const type &d ) const
	{ return QGArray::bsearch((const char*)&d,sizeof(type)); }
    type& operator[]( int i ) const
	{ return (type &)(*(type *)QGArray::at(i*sizeof(type))); }
    type& at( uint i ) const
	{ return (type &)(*(type *)QGArray::at(i*sizeof(type))); }
	 operator const type*() const { return (const type *)QGArray::data(); }
    bool operator==( const ZMemArray<type> &a ) const { return isEqual(a); }
    bool operator!=( const ZMemArray<type> &a ) const { return !isEqual(a); }
    Iterator begin() { return data(); }
    Iterator end() { return data() + size(); }
    ConstIterator begin() const { return data(); }
    ConstIterator end() const { return data() + size(); }
};

#endif
