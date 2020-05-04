/*
 * FactoryVideoPlayer.h
 *
 *  Created on: 2020年5月4日
 *      Author: vgoist
 */

#ifndef FACTORYVIDEOPLAYER_H_
#define FACTORYVIDEOPLAYER_H_

#include "videoPlay.h"

class FactoryVideoPlayer
{
public:
	static videoPlay* videoPlayerCreate(int type,int cols,int rows,int channels,FILE* fp);
};

#endif /* FACTORYVIDEOPLAYER_H_ */
