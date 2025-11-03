#include <javax/tools/FileObject.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;

namespace javax {
	namespace tools {

$MethodInfo _FileObject_MethodInfo_[] = {
	{"delete", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getLastModified", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FileObject_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.FileObject",
	nullptr,
	nullptr,
	nullptr,
	_FileObject_MethodInfo_
};

$Object* allocate$FileObject($Class* clazz) {
	return $of($alloc(FileObject));
}

$Class* FileObject::load$($String* name, bool initialize) {
	$loadClass(FileObject, name, initialize, &_FileObject_ClassInfo_, allocate$FileObject);
	return class$;
}

$Class* FileObject::class$ = nullptr;

	} // tools
} // javax