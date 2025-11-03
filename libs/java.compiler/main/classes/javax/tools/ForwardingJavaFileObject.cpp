#include <javax/tools/ForwardingJavaFileObject.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/net/URI.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Modifier = ::javax::lang::model::element::Modifier;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingFileObject = ::javax::tools::ForwardingFileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace javax {
	namespace tools {

$MethodInfo _ForwardingJavaFileObject_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*delete$", "()Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"*getLastModified", "()J", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/tools/JavaFileObject;)V", "(TF;)V", $PROTECTED, $method(static_cast<void(ForwardingJavaFileObject::*)($JavaFileObject*)>(&ForwardingJavaFileObject::init$))},
	{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC},
	{"*toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"*openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"*openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"*openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC},
	{"*openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ForwardingJavaFileObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.tools.ForwardingJavaFileObject",
	"javax.tools.ForwardingFileObject",
	"javax.tools.JavaFileObject",
	nullptr,
	_ForwardingJavaFileObject_MethodInfo_,
	"<F::Ljavax/tools/JavaFileObject;>Ljavax/tools/ForwardingFileObject<TF;>;Ljavax/tools/JavaFileObject;"
};

$Object* allocate$ForwardingJavaFileObject($Class* clazz) {
	return $of($alloc(ForwardingJavaFileObject));
}

$URI* ForwardingJavaFileObject::toUri() {
	 return this->$ForwardingFileObject::toUri();
}

$String* ForwardingJavaFileObject::getName() {
	 return this->$ForwardingFileObject::getName();
}

$InputStream* ForwardingJavaFileObject::openInputStream() {
	 return this->$ForwardingFileObject::openInputStream();
}

$OutputStream* ForwardingJavaFileObject::openOutputStream() {
	 return this->$ForwardingFileObject::openOutputStream();
}

$Reader* ForwardingJavaFileObject::openReader(bool ignoreEncodingErrors) {
	 return this->$ForwardingFileObject::openReader(ignoreEncodingErrors);
}

$CharSequence* ForwardingJavaFileObject::getCharContent(bool ignoreEncodingErrors) {
	 return this->$ForwardingFileObject::getCharContent(ignoreEncodingErrors);
}

$Writer* ForwardingJavaFileObject::openWriter() {
	 return this->$ForwardingFileObject::openWriter();
}

int64_t ForwardingJavaFileObject::getLastModified() {
	 return this->$ForwardingFileObject::getLastModified();
}

bool ForwardingJavaFileObject::delete$() {
	 return this->$ForwardingFileObject::delete$();
}

int32_t ForwardingJavaFileObject::hashCode() {
	 return this->$ForwardingFileObject::hashCode();
}

bool ForwardingJavaFileObject::equals(Object$* arg0) {
	 return this->$ForwardingFileObject::equals(arg0);
}

$Object* ForwardingJavaFileObject::clone() {
	 return this->$ForwardingFileObject::clone();
}

$String* ForwardingJavaFileObject::toString() {
	 return this->$ForwardingFileObject::toString();
}

void ForwardingJavaFileObject::finalize() {
	this->$ForwardingFileObject::finalize();
}

void ForwardingJavaFileObject::init$($JavaFileObject* fileObject) {
	$ForwardingFileObject::init$(fileObject);
}

$JavaFileObject$Kind* ForwardingJavaFileObject::getKind() {
	return $nc(($cast($JavaFileObject, this->fileObject)))->getKind();
}

bool ForwardingJavaFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	return $nc(($cast($JavaFileObject, this->fileObject)))->isNameCompatible(simpleName, kind);
}

$NestingKind* ForwardingJavaFileObject::getNestingKind() {
	return $nc(($cast($JavaFileObject, this->fileObject)))->getNestingKind();
}

$Modifier* ForwardingJavaFileObject::getAccessLevel() {
	return $nc(($cast($JavaFileObject, this->fileObject)))->getAccessLevel();
}

ForwardingJavaFileObject::ForwardingJavaFileObject() {
}

$Class* ForwardingJavaFileObject::load$($String* name, bool initialize) {
	$loadClass(ForwardingJavaFileObject, name, initialize, &_ForwardingJavaFileObject_ClassInfo_, allocate$ForwardingJavaFileObject);
	return class$;
}

$Class* ForwardingJavaFileObject::class$ = nullptr;

	} // tools
} // javax