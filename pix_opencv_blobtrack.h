/*-----------------------------------------------------------------
LOG
    GEM - Graphics Environment for Multimedia

    Threshold filter

    Copyright (c) 1997-1999 Mark Danks. mark@danks.org
    Copyright (c) G�nther Geiger. geiger@epy.co.at
    Copyright (c) 2001-2002 IOhannes m zmoelnig. forum::f�r::uml�ute. IEM. zmoelnig@iem.kug.ac.at
    Copyright (c) 2002 James Tittle & Chris Clepper
    For information on usage and redistribution, and for a DISCLAIMER OF ALL
    WARRANTIES, see the file, "GEM.LICENSE.TERMS" in this distribution.

-----------------------------------------------------------------*/

#ifndef INCLUDE_pix_opencv_template_H_
#define INCLUDE_pix_opencv_template_H_

#ifndef _EiC
#include "cv.h"
#endif

// ARma lib
#include "pattern.hpp"
#include "patterndetector.hpp"

#include "Base/GemPixObj.h"

/*-----------------------------------------------------------------
-------------------------------------------------------------------
CLASS
    pix_opencv_template
    
	square pattern detector
	
KEYWORDS
    pix
    
DESCRIPTION
   
-----------------------------------------------------------------*/
class GEM_EXTERN pix_opencv_template : public GemPixObj
{
    CPPEXTERN_HEADER(pix_opencv_template, GemPixObj)

    public:

	    //////////
	    // Constructor
    	pix_opencv_template();
    	
    protected:
    	
   	//////////
   	// Destructor
   	virtual ~pix_opencv_template();

   	//////////
   	// Do the processing
   	virtual void 	processRGBAImage(imageStruct &image);
   	virtual void 	processRGBImage(imageStruct &image);
	virtual void 	processYUVImage(imageStruct &image);
   	virtual void 	processGrayImage(imageStruct &image);

    private:
    
    t_outlet *m_dataout; // info outlet
	    
};
#endif	// for header file