/*
 * videoPlay.h
 *
 *  Created on: 2020年5月4日
 *      Author: vgoist
 */

#ifndef VIDEOPLAY_H_
#define VIDEOPLAY_H_

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

enum {SUCCESS = 0,FAIL = 1};
enum
{
	YUV420_12,	    YUV420_21,	  YUV420_NV12,	  YUV420_NV21,
	YUV420_YV12,	YUV420_YV21,

	YUV422_12,	    YUV422_21,    YUV422_NV12,	  YUV422_NV21,
	YUV422_YV12,	YUV422_YV21,

	GRAY
};

class videoPlay
{
public:
	virtual ~videoPlay();
	virtual int play() = 0;
	virtual int stop() = 0;
protected:
	int m_cols;
	int m_rows;
	int m_channel;
	int m_type;
	uchar* m_ptrData;
	cv::Mat m_frame;
	FILE* m_dataFp;
};

#endif /* VIDEOPLAY_H_ */
