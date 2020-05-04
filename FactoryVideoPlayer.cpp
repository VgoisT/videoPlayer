/*
 * FactoryVideoPlayer.cpp
 *
 *  Created on: 2020年5月4日
 *      Author: vgoist
 */

#include "FactoryVideoPlayer.h"

videoPlay* FactoryVideoPlayer::videoPlayerCreate(int type,int cols,int rows,int channels,FILE* fp)
{
	videoPlay* ptrHandle;

	if (type <= YUV422SP_NV21)
	{
		ptrHandle = static_cast<videoPlay*>(new yuv(type,cols,rows,channels,fp));
	}


	return ptrHandle;
}
