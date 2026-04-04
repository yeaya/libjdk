#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$JPEGWriterDisposerRecord.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <jcpp.h>

using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void JPEGImageWriter$JPEGWriterDisposerRecord::init$(int64_t pData) {
	this->pData = pData;
}

void JPEGImageWriter$JPEGWriterDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->pData != 0) {
			$JPEGImageWriter::disposeWriter(this->pData);
			this->pData = 0;
		}
	}
}

JPEGImageWriter$JPEGWriterDisposerRecord::JPEGImageWriter$JPEGWriterDisposerRecord() {
}

$Class* JPEGImageWriter$JPEGWriterDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pData", "J", nullptr, $PRIVATE, $field(JPEGImageWriter$JPEGWriterDisposerRecord, pData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(JPEGImageWriter$JPEGWriterDisposerRecord, init$, void, int64_t)},
		{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JPEGImageWriter$JPEGWriterDisposerRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$JPEGWriterDisposerRecord", "com.sun.imageio.plugins.jpeg.JPEGImageWriter", "JPEGWriterDisposerRecord", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JPEGImageWriter$JPEGWriterDisposerRecord",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.jpeg.JPEGImageWriter"
	};
	$loadClass(JPEGImageWriter$JPEGWriterDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGImageWriter$JPEGWriterDisposerRecord);
	});
	return class$;
}

$Class* JPEGImageWriter$JPEGWriterDisposerRecord::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com