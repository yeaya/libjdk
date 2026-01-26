#include <javax/tools/SimpleJavaFileObject.h>

#include <java/io/CharArrayReader.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <java/nio/CharBuffer.h>
#include <java/util/Objects.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <jcpp.h>

using $CharArrayReader = ::java::io::CharArrayReader;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $CharBuffer = ::java::nio::CharBuffer;
using $Objects = ::java::util::Objects;
using $Modifier = ::javax::lang::model::element::Modifier;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace javax {
	namespace tools {

$FieldInfo _SimpleJavaFileObject_FieldInfo_[] = {
	{"uri", "Ljava/net/URI;", nullptr, $PROTECTED | $FINAL, $field(SimpleJavaFileObject, uri)},
	{"kind", "Ljavax/tools/JavaFileObject$Kind;", nullptr, $PROTECTED | $FINAL, $field(SimpleJavaFileObject, kind)},
	{}
};

$MethodInfo _SimpleJavaFileObject_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URI;Ljavax/tools/JavaFileObject$Kind;)V", nullptr, $PROTECTED, $method(SimpleJavaFileObject, init$, void, $URI*, $JavaFileObject$Kind*)},
	{"delete", "()Z", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, delete$, bool)},
	{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, getAccessLevel, $Modifier*)},
	{"getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, getCharContent, $CharSequence*, bool), "java.io.IOException"},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, getKind, $JavaFileObject$Kind*)},
	{"getLastModified", "()J", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, getLastModified, int64_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, getName, $String*)},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, getNestingKind, $NestingKind*)},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, isNameCompatible, bool, $String*, $JavaFileObject$Kind*)},
	{"openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, openInputStream, $InputStream*), "java.io.IOException"},
	{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, openOutputStream, $OutputStream*), "java.io.IOException"},
	{"openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, openReader, $Reader*, bool), "java.io.IOException"},
	{"openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, openWriter, $Writer*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, toString, $String*)},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(SimpleJavaFileObject, toUri, $URI*)},
	{}
};

$ClassInfo _SimpleJavaFileObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.tools.SimpleJavaFileObject",
	"java.lang.Object",
	"javax.tools.JavaFileObject",
	_SimpleJavaFileObject_FieldInfo_,
	_SimpleJavaFileObject_MethodInfo_
};

$Object* allocate$SimpleJavaFileObject($Class* clazz) {
	return $of($alloc(SimpleJavaFileObject));
}

void SimpleJavaFileObject::init$($URI* uri, $JavaFileObject$Kind* kind) {
	$Objects::requireNonNull(uri);
	$Objects::requireNonNull(kind);
	if (uri->getPath() == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"URI must have a path: "_s, uri}));
	}
	$set(this, uri, uri);
	$set(this, kind, kind);
}

$URI* SimpleJavaFileObject::toUri() {
	return this->uri;
}

$String* SimpleJavaFileObject::getName() {
	return $nc($(toUri()))->getPath();
}

$InputStream* SimpleJavaFileObject::openInputStream() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$OutputStream* SimpleJavaFileObject::openOutputStream() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Reader* SimpleJavaFileObject::openReader(bool ignoreEncodingErrors) {
	$useLocalCurrentObjectStackCache();
	$var($CharSequence, charContent, getCharContent(ignoreEncodingErrors));
	if (charContent == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if ($instanceOf($CharBuffer, charContent)) {
		$var($CharBuffer, buffer, $cast($CharBuffer, charContent));
		if ($nc(buffer)->hasArray()) {
			return $new($CharArrayReader, $($cast($chars, buffer->array())));
		}
	}
	return $new($StringReader, $($nc(charContent)->toString()));
}

$CharSequence* SimpleJavaFileObject::getCharContent(bool ignoreEncodingErrors) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Writer* SimpleJavaFileObject::openWriter() {
	return $new($OutputStreamWriter, $(openOutputStream()));
}

int64_t SimpleJavaFileObject::getLastModified() {
	return 0;
}

bool SimpleJavaFileObject::delete$() {
	return false;
}

$JavaFileObject$Kind* SimpleJavaFileObject::getKind() {
	return this->kind;
}

bool SimpleJavaFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	$useLocalCurrentObjectStackCache();
	$var($String, baseName, $str({simpleName, $nc(kind)->extension}));
	bool var$0 = kind->equals($(getKind()));
	if (var$0) {
		bool var$1 = $nc(baseName)->equals($($nc($(toUri()))->getPath()));
		var$0 = (var$1 || $nc($($nc($(toUri()))->getPath()))->endsWith($$str({"/"_s, baseName})));
	}
	return var$0;
}

$NestingKind* SimpleJavaFileObject::getNestingKind() {
	return nullptr;
}

$Modifier* SimpleJavaFileObject::getAccessLevel() {
	return nullptr;
}

$String* SimpleJavaFileObject::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "["_s}));
	$var($String, var$0, $$concat(var$1, $(toUri())));
	return $concat(var$0, "]"_s);
}

SimpleJavaFileObject::SimpleJavaFileObject() {
}

$Class* SimpleJavaFileObject::load$($String* name, bool initialize) {
	$loadClass(SimpleJavaFileObject, name, initialize, &_SimpleJavaFileObject_ClassInfo_, allocate$SimpleJavaFileObject);
	return class$;
}

$Class* SimpleJavaFileObject::class$ = nullptr;

	} // tools
} // javax