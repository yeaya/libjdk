#include <javax/tools/ForwardingFileObject.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/net/URI.h>
#include <java/util/Objects.h>
#include <javax/tools/FileObject.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Objects = ::java::util::Objects;
using $FileObject = ::javax::tools::FileObject;

namespace javax {
	namespace tools {

$FieldInfo _ForwardingFileObject_FieldInfo_[] = {
	{"fileObject", "Ljavax/tools/FileObject;", "TF;", $PROTECTED | $FINAL, $field(ForwardingFileObject, fileObject)},
	{}
};

$MethodInfo _ForwardingFileObject_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/FileObject;)V", "(TF;)V", $PROTECTED, $method(ForwardingFileObject, init$, void, $FileObject*)},
	{"delete", "()Z", nullptr, $PUBLIC, $virtualMethod(ForwardingFileObject, delete$, bool)},
	{"getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC, $virtualMethod(ForwardingFileObject, getCharContent, $CharSequence*, bool), "java.io.IOException"},
	{"getLastModified", "()J", nullptr, $PUBLIC, $virtualMethod(ForwardingFileObject, getLastModified, int64_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ForwardingFileObject, getName, $String*)},
	{"openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(ForwardingFileObject, openInputStream, $InputStream*), "java.io.IOException"},
	{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(ForwardingFileObject, openOutputStream, $OutputStream*), "java.io.IOException"},
	{"openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC, $virtualMethod(ForwardingFileObject, openReader, $Reader*, bool), "java.io.IOException"},
	{"openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(ForwardingFileObject, openWriter, $Writer*), "java.io.IOException"},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(ForwardingFileObject, toUri, $URI*)},
	{}
};

$ClassInfo _ForwardingFileObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.tools.ForwardingFileObject",
	"java.lang.Object",
	"javax.tools.FileObject",
	_ForwardingFileObject_FieldInfo_,
	_ForwardingFileObject_MethodInfo_,
	"<F::Ljavax/tools/FileObject;>Ljava/lang/Object;Ljavax/tools/FileObject;"
};

$Object* allocate$ForwardingFileObject($Class* clazz) {
	return $of($alloc(ForwardingFileObject));
}

void ForwardingFileObject::init$($FileObject* fileObject) {
	$set(this, fileObject, $cast($FileObject, $Objects::requireNonNull(fileObject)));
}

$URI* ForwardingFileObject::toUri() {
	return $nc(this->fileObject)->toUri();
}

$String* ForwardingFileObject::getName() {
	return $nc(this->fileObject)->getName();
}

$InputStream* ForwardingFileObject::openInputStream() {
	return $nc(this->fileObject)->openInputStream();
}

$OutputStream* ForwardingFileObject::openOutputStream() {
	return $nc(this->fileObject)->openOutputStream();
}

$Reader* ForwardingFileObject::openReader(bool ignoreEncodingErrors) {
	return $nc(this->fileObject)->openReader(ignoreEncodingErrors);
}

$CharSequence* ForwardingFileObject::getCharContent(bool ignoreEncodingErrors) {
	return $nc(this->fileObject)->getCharContent(ignoreEncodingErrors);
}

$Writer* ForwardingFileObject::openWriter() {
	return $nc(this->fileObject)->openWriter();
}

int64_t ForwardingFileObject::getLastModified() {
	return $nc(this->fileObject)->getLastModified();
}

bool ForwardingFileObject::delete$() {
	return $nc(this->fileObject)->delete$();
}

ForwardingFileObject::ForwardingFileObject() {
}

$Class* ForwardingFileObject::load$($String* name, bool initialize) {
	$loadClass(ForwardingFileObject, name, initialize, &_ForwardingFileObject_ClassInfo_, allocate$ForwardingFileObject);
	return class$;
}

$Class* ForwardingFileObject::class$ = nullptr;

	} // tools
} // javax