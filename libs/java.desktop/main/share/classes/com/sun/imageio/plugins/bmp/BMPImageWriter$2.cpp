#include <com/sun/imageio/plugins/bmp/BMPImageWriter$2.h>
#include <com/sun/imageio/plugins/bmp/BMPImageWriter.h>
#include <javax/imageio/ImageWriter.h>
#include <jcpp.h>

using $BMPImageWriter = ::com::sun::imageio::plugins::bmp::BMPImageWriter;
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

void BMPImageWriter$2::init$($BMPImageWriter* this$0) {
	$set(this, this$0, this$0);
}

void BMPImageWriter$2::warningOccurred($ImageWriter* source, int32_t imageIndex, $String* warning) {
	$BMPImageWriter::access$100(this->this$0, imageIndex, warning);
}

BMPImageWriter$2::BMPImageWriter$2() {
}

$Class* BMPImageWriter$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/imageio/plugins/bmp/BMPImageWriter;", nullptr, $FINAL | $SYNTHETIC, $field(BMPImageWriter$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/imageio/plugins/bmp/BMPImageWriter;)V", nullptr, 0, $method(BMPImageWriter$2, init$, void, $BMPImageWriter*)},
		{"warningOccurred", "(Ljavax/imageio/ImageWriter;ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BMPImageWriter$2, warningOccurred, void, $ImageWriter*, int32_t, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.imageio.plugins.bmp.BMPImageWriter",
		"writeEmbedded",
		"(Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.bmp.BMPImageWriter$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.bmp.BMPImageWriter$2",
		"java.lang.Object",
		"javax.imageio.event.IIOWriteWarningListener",
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
	$loadClass(BMPImageWriter$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BMPImageWriter$2);
	});
	return class$;
}

$Class* BMPImageWriter$2::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com