#include <com/sun/imageio/plugins/bmp/BMPImageWriter$1.h>
#include <com/sun/imageio/plugins/bmp/BMPImageWriter$IIOWriteProgressAdapter.h>
#include <com/sun/imageio/plugins/bmp/BMPImageWriter.h>
#include <javax/imageio/ImageWriter.h>
#include <jcpp.h>

using $BMPImageWriter = ::com::sun::imageio::plugins::bmp::BMPImageWriter;
using $BMPImageWriter$IIOWriteProgressAdapter = ::com::sun::imageio::plugins::bmp::BMPImageWriter$IIOWriteProgressAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWriter = ::javax::imageio::ImageWriter;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

void BMPImageWriter$1::init$($BMPImageWriter* this$0) {
	$set(this, this$0, this$0);
	$BMPImageWriter$IIOWriteProgressAdapter::init$();
}

void BMPImageWriter$1::imageProgress($ImageWriter* source, float percentageDone) {
	$BMPImageWriter::access$000(this->this$0, percentageDone);
}

BMPImageWriter$1::BMPImageWriter$1() {
}

$Class* BMPImageWriter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/imageio/plugins/bmp/BMPImageWriter;", nullptr, $FINAL | $SYNTHETIC, $field(BMPImageWriter$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/imageio/plugins/bmp/BMPImageWriter;)V", nullptr, 0, $method(BMPImageWriter$1, init$, void, $BMPImageWriter*)},
		{"imageProgress", "(Ljavax/imageio/ImageWriter;F)V", nullptr, $PUBLIC, $virtualMethod(BMPImageWriter$1, imageProgress, void, $ImageWriter*, float)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.imageio.plugins.bmp.BMPImageWriter",
		"writeEmbedded",
		"(Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.bmp.BMPImageWriter$1", nullptr, nullptr, 0},
		{"com.sun.imageio.plugins.bmp.BMPImageWriter$IIOWriteProgressAdapter", "com.sun.imageio.plugins.bmp.BMPImageWriter", "IIOWriteProgressAdapter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.bmp.BMPImageWriter$1",
		"com.sun.imageio.plugins.bmp.BMPImageWriter$IIOWriteProgressAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.bmp.BMPImageWriter"
	};
	$loadClass(BMPImageWriter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BMPImageWriter$1);
	});
	return class$;
}

$Class* BMPImageWriter$1::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com