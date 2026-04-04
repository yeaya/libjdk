#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$IllegalThumbException.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <jcpp.h>

using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void JFIFMarkerSegment$IllegalThumbException::init$($JFIFMarkerSegment* this$0) {
	$set(this, this$0, this$0);
	$Exception::init$();
}

JFIFMarkerSegment$IllegalThumbException::JFIFMarkerSegment$IllegalThumbException() {
}

JFIFMarkerSegment$IllegalThumbException::JFIFMarkerSegment$IllegalThumbException(const JFIFMarkerSegment$IllegalThumbException& e) : $Exception(e) {
}

void JFIFMarkerSegment$IllegalThumbException::throw$() {
	throw *this;
}

$Class* JFIFMarkerSegment$IllegalThumbException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(JFIFMarkerSegment$IllegalThumbException, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;)V", nullptr, $PRIVATE, $method(JFIFMarkerSegment$IllegalThumbException, init$, void, $JFIFMarkerSegment*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "IllegalThumbException", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment"
	};
	$loadClass(JFIFMarkerSegment$IllegalThumbException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JFIFMarkerSegment$IllegalThumbException);
	});
	return class$;
}

$Class* JFIFMarkerSegment$IllegalThumbException::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com