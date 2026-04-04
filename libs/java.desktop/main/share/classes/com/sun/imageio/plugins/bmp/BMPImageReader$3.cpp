#include <com/sun/imageio/plugins/bmp/BMPImageReader$3.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>
#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $BMPImageReader = ::com::sun::imageio::plugins::bmp::BMPImageReader;
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

void BMPImageReader$3::init$($BMPImageReader* this$0) {
	$set(this, this$0, this$0);
}

void BMPImageReader$3::warningOccurred($ImageReader* source, $String* warning) {
	$BMPImageReader::access$400(this->this$0, warning);
}

BMPImageReader$3::BMPImageReader$3() {
}

$Class* BMPImageReader$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/imageio/plugins/bmp/BMPImageReader;", nullptr, $FINAL | $SYNTHETIC, $field(BMPImageReader$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/imageio/plugins/bmp/BMPImageReader;)V", nullptr, 0, $method(BMPImageReader$3, init$, void, $BMPImageReader*)},
		{"warningOccurred", "(Ljavax/imageio/ImageReader;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BMPImageReader$3, warningOccurred, void, $ImageReader*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.imageio.plugins.bmp.BMPImageReader",
		"readEmbedded",
		"(ILjava/awt/image/BufferedImage;Ljavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.bmp.BMPImageReader$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.bmp.BMPImageReader$3",
		"java.lang.Object",
		"javax.imageio.event.IIOReadWarningListener",
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
	$loadClass(BMPImageReader$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BMPImageReader$3);
	});
	return class$;
}

$Class* BMPImageReader$3::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com