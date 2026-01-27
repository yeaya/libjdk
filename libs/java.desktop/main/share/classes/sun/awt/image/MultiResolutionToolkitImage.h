#ifndef _sun_awt_image_MultiResolutionToolkitImage_h_
#define _sun_awt_image_MultiResolutionToolkitImage_h_
//$ class sun.awt.image.MultiResolutionToolkitImage
//$ extends sun.awt.image.ToolkitImage
//$ implements java.awt.image.MultiResolutionImage

#include <java/awt/image/MultiResolutionImage.h>
#include <sun/awt/image/ToolkitImage.h>

#pragma push_macro("BITS_INFO")
#undef BITS_INFO

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class MultiResolutionToolkitImage : public ::sun::awt::image::ToolkitImage, public ::java::awt::image::MultiResolutionImage {
	$class(MultiResolutionToolkitImage, $NO_CLASS_INIT, ::sun::awt::image::ToolkitImage, ::java::awt::image::MultiResolutionImage)
public:
	MultiResolutionToolkitImage();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Image* lowResolutionImage, ::java::awt::Image* resolutionVariant);
	static void checkSize(double width, double height);
	virtual ::java::awt::Image* getResolutionVariant(double destWidth, double destHeight) override;
	virtual ::java::awt::Image* getResolutionVariant();
	static ::java::awt::image::ImageObserver* getResolutionVariantObserver(::java::awt::Image* image, ::java::awt::image::ImageObserver* observer, int32_t imgWidth, int32_t imgHeight, int32_t rvWidth, int32_t rvHeight);
	static ::java::awt::image::ImageObserver* getResolutionVariantObserver(::java::awt::Image* image, ::java::awt::image::ImageObserver* observer, int32_t imgWidth, int32_t imgHeight, int32_t rvWidth, int32_t rvHeight, bool concatenateInfo);
	virtual ::java::util::List* getResolutionVariants() override;
	static ::java::awt::image::ImageObserver* lambda$getResolutionVariantObserver$0(bool concatenateInfo, ::java::awt::Image* image, ::java::awt::image::ImageObserver* key);
	static ::java::awt::Image* map(::sun::awt::image::MultiResolutionToolkitImage* mrImage, ::java::util::function::Function* mapper);
	virtual $String* toString() override;
	::java::awt::Image* resolutionVariant = nullptr;
	static const int32_t BITS_INFO = 56; // ImageObserver.SOMEBITS | ImageObserver.FRAMEBITS | ImageObserver.ALLBITS
};

		} // image
	} // awt
} // sun

#pragma pop_macro("BITS_INFO")

#endif // _sun_awt_image_MultiResolutionToolkitImage_h_