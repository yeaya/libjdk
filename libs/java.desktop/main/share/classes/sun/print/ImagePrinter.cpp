#include <sun/print/ImagePrinter.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <javax/imageio/ImageIO.h>
#include <jcpp.h>

#undef NO_SUCH_PAGE
#undef PAGE_EXISTS

using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ImageIO = ::javax::imageio::ImageIO;

namespace sun {
	namespace print {

void ImagePrinter::init$($InputStream* stream) {
	try {
		$set(this, image, $ImageIO::read(stream));
	} catch ($Exception& e) {
	}
}

void ImagePrinter::init$($URL* url) {
	try {
		$set(this, image, $ImageIO::read(url));
	} catch ($Exception& e) {
	}
}

int32_t ImagePrinter::print($Graphics* g, $PageFormat* pf, int32_t index) {
	if (index > 0 || this->image == nullptr) {
		return $Printable::NO_SUCH_PAGE;
	}
	double var$0 = $nc(pf)->getImageableX();
	$nc($cast($Graphics2D, g))->translate(var$0, pf->getImageableY());
	int32_t w = $nc(this->image)->getWidth(nullptr);
	int32_t h = $nc(this->image)->getHeight(nullptr);
	int32_t iw = $cast(int32_t, pf->getImageableWidth());
	int32_t ih = $cast(int32_t, pf->getImageableHeight());
	int32_t dw = w;
	int32_t dh = h;
	if (dw > iw) {
		dh = $cast(int32_t, (dh * ((float)iw / (float)dw)));
		dw = iw;
	}
	if (dh > ih) {
		dw = $cast(int32_t, (dw * ((float)ih / (float)dh)));
		dh = ih;
	}
	int32_t dx = (iw - dw) / 2;
	int32_t dy = (ih - dh) / 2;
	$nc(g)->drawImage(this->image, dx, dy, dx + dw, dy + dh, 0, 0, w, h, nullptr);
	return $Printable::PAGE_EXISTS;
}

ImagePrinter::ImagePrinter() {
}

$Class* ImagePrinter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"image", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(ImagePrinter, image)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(ImagePrinter, init$, void, $InputStream*)},
		{"<init>", "(Ljava/net/URL;)V", nullptr, 0, $method(ImagePrinter, init$, void, $URL*)},
		{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC, $virtualMethod(ImagePrinter, print, int32_t, $Graphics*, $PageFormat*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.ImagePrinter",
		"java.lang.Object",
		"java.awt.print.Printable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImagePrinter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImagePrinter);
	});
	return class$;
}

$Class* ImagePrinter::class$ = nullptr;

	} // print
} // sun