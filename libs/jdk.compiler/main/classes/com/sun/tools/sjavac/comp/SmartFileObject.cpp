#include <com/sun/tools/sjavac/comp/SmartFileObject.h>

#include <com/sun/tools/sjavac/comp/SmartWriter.h>
#include <java/io/BufferedReader.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/net/URI.h>
#include <java/nio/file/NoSuchFileException.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $SmartWriter = ::com::sun::tools::sjavac::comp::SmartWriter;
using $BufferedReader = ::java::io::BufferedReader;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $Modifier = ::javax::lang::model::element::Modifier;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

$FieldInfo _SmartFileObject_FieldInfo_[] = {
	{"file", "Ljavax/tools/JavaFileObject;", nullptr, 0, $field(SmartFileObject, file)},
	{"lineseparator", "Ljava/lang/String;", nullptr, $STATIC, $staticField(SmartFileObject, lineseparator)},
	{}
};

$MethodInfo _SmartFileObject_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileObject;)V", nullptr, $PUBLIC, $method(SmartFileObject, init$, void, $JavaFileObject*)},
	{"delete", "()Z", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, delete$, bool)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, equals, bool, Object$*)},
	{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, getAccessLevel, $Modifier*)},
	{"getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, getCharContent, $CharSequence*, bool), "java.io.IOException"},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, getKind, $JavaFileObject$Kind*)},
	{"getLastModified", "()J", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, getLastModified, int64_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, getName, $String*)},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, getNestingKind, $NestingKind*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, hashCode, int32_t)},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, isNameCompatible, bool, $String*, $JavaFileObject$Kind*)},
	{"openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, openInputStream, $InputStream*), "java.io.IOException"},
	{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, openOutputStream, $OutputStream*), "java.io.IOException"},
	{"openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, openReader, $Reader*, bool), "java.io.IOException"},
	{"openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, openWriter, $Writer*), "java.io.IOException"},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(SmartFileObject, toUri, $URI*)},
	{}
};

$ClassInfo _SmartFileObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.SmartFileObject",
	"java.lang.Object",
	"javax.tools.JavaFileObject",
	_SmartFileObject_FieldInfo_,
	_SmartFileObject_MethodInfo_
};

$Object* allocate$SmartFileObject($Class* clazz) {
	return $of($alloc(SmartFileObject));
}

$String* SmartFileObject::lineseparator = nullptr;

void SmartFileObject::init$($JavaFileObject* r) {
	$set(this, file, r);
}

bool SmartFileObject::equals(Object$* other) {
	return $nc($of(this->file))->equals(other);
}

int32_t SmartFileObject::hashCode() {
	return $nc($of(this->file))->hashCode();
}

$JavaFileObject$Kind* SmartFileObject::getKind() {
	return $nc(this->file)->getKind();
}

bool SmartFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	return $nc(this->file)->isNameCompatible(simpleName, kind);
}

$URI* SmartFileObject::toUri() {
	return $nc(this->file)->toUri();
}

$String* SmartFileObject::getName() {
	return $nc(this->file)->getName();
}

$InputStream* SmartFileObject::openInputStream() {
	return $nc(this->file)->openInputStream();
}

$OutputStream* SmartFileObject::openOutputStream() {
	return $nc(this->file)->openOutputStream();
}

$CharSequence* SmartFileObject::getCharContent(bool ignoreEncodingErrors) {
	return $nc(this->file)->getCharContent(ignoreEncodingErrors);
}

$Writer* SmartFileObject::openWriter() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, s, $new($StringBuilder));
	try {
		$var($BufferedReader, r, $new($BufferedReader, $($nc(this->file)->openReader(true))));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					while (r->ready()) {
						s->append($$str({$(r->readLine()), SmartFileObject::lineseparator}));
					}
				} catch ($Throwable& t$) {
					try {
						r->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				r->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($FileNotFoundException& e) {
	} catch ($NoSuchFileException& e) {
	}
	$var($JavaFileObject, var$2, this->file);
	$var($String, var$3, s->toString());
	return $new($SmartWriter, var$2, var$3, $($nc(this->file)->getName()));
}

int64_t SmartFileObject::getLastModified() {
	return $nc(this->file)->getLastModified();
}

bool SmartFileObject::delete$() {
	return $nc(this->file)->delete$();
}

$Modifier* SmartFileObject::getAccessLevel() {
	return $nc(this->file)->getAccessLevel();
}

$NestingKind* SmartFileObject::getNestingKind() {
	return $nc(this->file)->getNestingKind();
}

$Reader* SmartFileObject::openReader(bool ignoreEncodingErrors) {
	return $nc(this->file)->openReader(ignoreEncodingErrors);
}

void clinit$SmartFileObject($Class* class$) {
	$assignStatic(SmartFileObject::lineseparator, $System::getProperty("line.separator"_s));
}

SmartFileObject::SmartFileObject() {
}

$Class* SmartFileObject::load$($String* name, bool initialize) {
	$loadClass(SmartFileObject, name, initialize, &_SmartFileObject_ClassInfo_, clinit$SmartFileObject, allocate$SmartFileObject);
	return class$;
}

$Class* SmartFileObject::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com