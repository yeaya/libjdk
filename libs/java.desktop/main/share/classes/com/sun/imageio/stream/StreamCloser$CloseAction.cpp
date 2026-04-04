#include <com/sun/imageio/stream/StreamCloser$CloseAction.h>
#include <com/sun/imageio/stream/StreamCloser.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

void StreamCloser$CloseAction::init$($ImageInputStream* iis) {
	$set(this, iis, iis);
}

void StreamCloser$CloseAction::performAction() {
	if (this->iis != nullptr) {
		this->iis->close();
	}
}

StreamCloser$CloseAction::StreamCloser$CloseAction() {
}

$Class* StreamCloser$CloseAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iis", "Ljavax/imageio/stream/ImageInputStream;", nullptr, $PRIVATE, $field(StreamCloser$CloseAction, iis)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/stream/ImageInputStream;)V", nullptr, $PRIVATE, $method(StreamCloser$CloseAction, init$, void, $ImageInputStream*)},
		{"performAction", "()V", nullptr, $PUBLIC, $method(StreamCloser$CloseAction, performAction, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.stream.StreamCloser$CloseAction", "com.sun.imageio.stream.StreamCloser", "CloseAction", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.imageio.stream.StreamCloser$CloseAction",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.stream.StreamCloser"
	};
	$loadClass(StreamCloser$CloseAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamCloser$CloseAction);
	});
	return class$;
}

$Class* StreamCloser$CloseAction::class$ = nullptr;

			} // stream
		} // imageio
	} // sun
} // com