#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$2.h>
#include <com/sun/imageio/plugins/jpeg/ImageTypeProducer.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/DataBuffer.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef TYPE_BYTE

using $ImageTypeProducer = ::com::sun::imageio::plugins::jpeg::ImageTypeProducer;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void JPEGImageReader$2::init$($JPEGImageReader* this$0) {
	$set(this, this$0, this$0);
	$ImageTypeProducer::init$();
}

$ImageTypeSpecifier* JPEGImageReader$2::produce() {
	$init($JPEG);
	return $ImageTypeSpecifier::createInterleaved(this->this$0->iccCS, $JPEG::bOffsRGB, $DataBuffer::TYPE_BYTE, false, false);
}

JPEGImageReader$2::JPEGImageReader$2() {
}

$Class* JPEGImageReader$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;", nullptr, $FINAL | $SYNTHETIC, $field(JPEGImageReader$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;)V", nullptr, 0, $method(JPEGImageReader$2, init$, void, $JPEGImageReader*)},
		{"produce", "()Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PROTECTED, $virtualMethod(JPEGImageReader$2, produce, $ImageTypeSpecifier*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.imageio.plugins.jpeg.JPEGImageReader",
		"getImageTypesOnThread",
		"(I)Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.JPEGImageReader$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JPEGImageReader$2",
		"com.sun.imageio.plugins.jpeg.ImageTypeProducer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.jpeg.JPEGImageReader"
	};
	$loadClass(JPEGImageReader$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGImageReader$2);
	});
	return class$;
}

$Class* JPEGImageReader$2::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com