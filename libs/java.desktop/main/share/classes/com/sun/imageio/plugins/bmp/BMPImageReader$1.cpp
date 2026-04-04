#include <com/sun/imageio/plugins/bmp/BMPImageReader$1.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader$EmbeddedProgressAdapter.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>
#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $BMPImageReader = ::com::sun::imageio::plugins::bmp::BMPImageReader;
using $BMPImageReader$EmbeddedProgressAdapter = ::com::sun::imageio::plugins::bmp::BMPImageReader$EmbeddedProgressAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

void BMPImageReader$1::init$($BMPImageReader* this$0) {
	$set(this, this$0, this$0);
	$BMPImageReader$EmbeddedProgressAdapter::init$();
}

void BMPImageReader$1::imageProgress($ImageReader* source, float percentageDone) {
	$BMPImageReader::access$000(this->this$0, percentageDone);
}

BMPImageReader$1::BMPImageReader$1() {
}

$Class* BMPImageReader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/imageio/plugins/bmp/BMPImageReader;", nullptr, $FINAL | $SYNTHETIC, $field(BMPImageReader$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/imageio/plugins/bmp/BMPImageReader;)V", nullptr, 0, $method(BMPImageReader$1, init$, void, $BMPImageReader*)},
		{"imageProgress", "(Ljavax/imageio/ImageReader;F)V", nullptr, $PUBLIC, $virtualMethod(BMPImageReader$1, imageProgress, void, $ImageReader*, float)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.imageio.plugins.bmp.BMPImageReader",
		"readEmbedded",
		"(ILjava/awt/image/BufferedImage;Ljavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.bmp.BMPImageReader$1", nullptr, nullptr, 0},
		{"com.sun.imageio.plugins.bmp.BMPImageReader$EmbeddedProgressAdapter", "com.sun.imageio.plugins.bmp.BMPImageReader", "EmbeddedProgressAdapter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.bmp.BMPImageReader$1",
		"com.sun.imageio.plugins.bmp.BMPImageReader$EmbeddedProgressAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.bmp.BMPImageReader"
	};
	$loadClass(BMPImageReader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BMPImageReader$1);
	});
	return class$;
}

$Class* BMPImageReader$1::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com