/*
 * yuv.h
 *
 *  Created on: 2020年5月4日
 *      Author: vgoist
 */

#ifndef YUV_H_
#define YUV_H_

#include "videoPlay.h"

class yuv : public videoPlay
{
public:
	yuv(int type,int cols,int rows,FILE *fp);
	virtual ~yuv();
	int play();
	int stop();

private:
	void changeFrame(cv::Mat& yuvFrame);
private:
	int m_Framesize;

};

#endif /* YUV_H_ */
