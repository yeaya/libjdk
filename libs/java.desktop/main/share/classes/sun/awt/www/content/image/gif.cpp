#include <sun/awt/www/content/image/gif.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/ImageProducer.h>
#include <java/net/ContentHandler.h>
#include <java/net/URLConnection.h>
#include <sun/awt/image/URLImageSource.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::java::net::ContentHandler;
using $URLConnection = ::java::net::URLConnection;
using $URLImageSource = ::sun::awt::image::URLImageSource;

namespace sun {
	namespace awt {
		namespace www {
			namespace content {
				namespace image {

void gif::init$() {
	$ContentHandler::init$();
}

$Object* gif::getContent($URLConnection* urlc) {
	return $of($new($URLImageSource, urlc));
}

$Object* gif::getContent($URLConnection* urlc, $ClassArray* classes) {
	$useLocalObjectStack();
	$var($ClassArray, cls, classes);
	for (int32_t i = 0; i < $nc(cls)->length; ++i) {
		$load($URLImageSource);
		if ($nc(cls->get(i))->isAssignableFrom($URLImageSource::class$)) {
			return $of($new($URLImageSource, urlc));
		}
		$load($Image);
		if ($nc(cls->get(i))->isAssignableFrom($Image::class$)) {
			$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
			return $nc(tk)->createImage($$new($URLImageSource, urlc));
		}
	}
	return nullptr;
}

gif::gif() {
}

$Class* gif::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(gif, init$, void)},
		{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(gif, getContent, $Object*, $URLConnection*), "java.io.IOException"},
		{"getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(gif, getContent, $Object*, $URLConnection*, $ClassArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.www.content.image.gif",
		"java.net.ContentHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(gif, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(gif);
	});
	return class$;
}

$Class* gif::class$ = nullptr;

				} // image
			} // content
		} // www
	} // awt
} // sun