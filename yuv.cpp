/*
 * yuv.cpp
 *
 *  Created on: 2020年5月4日
 *      Author: vgoist
 */

#include "yuv.h"

yuv::yuv(int type,int cols,int rows,FILE *fp)
	:m_type(type),m_cols(vols),m_rows(rows),m_dataFp(fp)
{
	if (m_type <= YUV420SP_NV21) m_Framesize = m_rows * m_cols * 1.5;
	else if (m_type <= YUV422SP_NV21) m_Framesize = m_rows * m_cols * 2;
}

yuv::~yuv()
{

}


int yuv::play()
{
	int ret = fread(m_ptrData,m_Framesize,1,fp);
	cv::Mat(m_rows,m_cols,CV_8UC1,m_ptrData);

	return SUCCESS;
}
int yuv::stop()
{



	return SUCCESS;
}

void yuv::changeFrame(cv::Mat& yuvFrame)
{
	if (m_type == YUV420_YV12) cv::cvtColor(yuvFrame,m_frame,CV_YUV2BGR_I420);
}




