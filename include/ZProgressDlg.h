//Fix for ZN5 by Ant-ON, 2009
//Fix for ZN5/U9 by Ant-ON, 25-10-2010


// Copyright (c) 27-Apr-07 - 2008 Motorola, Inc. All rights reserved.

#ifndef _ZPROGRESSDLG_H
#define _ZPROGRESSDLG_H

#include <ZPopup.h>
#include <ZMeter.h>

/* Size: 216=54*4 */


class ZProgressDlg : public ZPopup
{	
	Q_OBJECT
	unsigned int data[54-sizeof(ZPopup)/4];

public:
    ZProgressDlg(const QString& strDlgTitle,
                 const QString& strInstructText,
                 int nTotalStep,
                 int nMaxSize,
                 QWidget* parent = NULL, const char* name = 0, bool modal = true, WFlags f = 0);
    ZProgressDlg(const QString& strDlgTitle,
                 const QString& strInstructText,
                 const QString& strFileName,
                 QWidget* parent = NULL, const char* name = 0, bool modal = true, WFlags f = 0);
    ZProgressDlg(const QString& strDlgTitle,
                 const QString& strInstructText,
                 int nTotalStep = 10,
                 QWidget* parent = NULL, const char* name = 0, bool modal = true, WFlags f = 0);
    ZProgressDlg(QWidget* parent = NULL, const char* name = 0, bool modal = true, WFlags f = 0);
	
	~ZProgressDlg();

	void autoClose() const;
	void autoReset() const;
	void cancel();
	void cancelled();
	void changeMeter(QString const&);
	void changeMeter(int);
	void changeMeter(int, int);
	void forceShow();
	//void getMeter();
    ZMeter* getMeter();
	//void getMeterModule();
    ZMeterModule* getMeterModule();
	void getMinimumDuration() const;
	void getProgress();
	void getProgressTotalStep();
	void initialize(QString const&, QString const&);
	void keyPressEvent(QKeyEvent*);
	void reset();
	void setAutoClose(bool);
	void setAutoPercentFlag(bool);
	void setAutoReset(bool);
	void setMMAlign(ZMeterModule::Alignment);
	void setMMLabelText(QString const&);
	//void setMeterModule(ZMeterModule*);
	//void setMinimumDuration(int);
	void setProgress(int);
	void setProgressTotalStep(int);
	bool wasCancelled() const;

public slots:
//	void slotLeftSoftKeyClicked();
	void  slotResizeAllChild(int);
};

#endif
