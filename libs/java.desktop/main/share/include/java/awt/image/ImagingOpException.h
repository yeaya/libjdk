#ifndef _java_awt_image_ImagingOpException_h_
#define _java_awt_image_ImagingOpException_h_
//$ class java.awt.image.ImagingOpException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace awt {
		namespace image {

class $import ImagingOpException : public ::java::lang::RuntimeException {
	$class(ImagingOpException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ImagingOpException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x6f631ad96141b232;
	ImagingOpException(const ImagingOpException& e);
	virtual void throw$() override;
	inline ImagingOpException* operator ->() const {
		return (ImagingOpException*)throwing$;
	}
	inline operator ImagingOpException*() const {
		return (ImagingOpException*)throwing$;
	}
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_ImagingOpException_h_