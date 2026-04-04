#include <javax/management/loading/MLetObjectInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Array.h>
#include <javax/management/loading/MLet.h>
#include <jcpp.h>

#undef TYPE

using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $1Array = ::java::lang::reflect::Array;
using $MLet = ::javax::management::loading::MLet;

namespace javax {
	namespace management {
		namespace loading {

void MLetObjectInputStream::init$($InputStream* in, $MLet* loader) {
	$ObjectInputStream::init$(in);
	if (loader == nullptr) {
		$throwNew($IllegalArgumentException, "Illegal null argument to MLetObjectInputStream"_s);
	}
	$set(this, loader, loader);
}

$Class* MLetObjectInputStream::primitiveType(char16_t c) {
	switch (c) {
	case u'B':
		return $Byte::TYPE;
	case u'C':
		return $Character::TYPE;
	case u'D':
		return $Double::TYPE;
	case u'F':
		return $Float::TYPE;
	case u'I':
		return $Integer::TYPE;
	case u'J':
		return $Long::TYPE;
	case u'S':
		return $Short::TYPE;
	case u'Z':
		return $Boolean::TYPE;
	}
	return nullptr;
}

$Class* MLetObjectInputStream::resolveClass($ObjectStreamClass* objectstreamclass) {
	$useLocalObjectStack();
	$var($String, s, $nc(objectstreamclass)->getName());
	if ($nc(s)->startsWith("["_s)) {
		int32_t i = 0;
		for (i = 1; s->charAt(i) == u'['; ++i) {
			;
		}
		$Class* class1 = nullptr;
		if (s->charAt(i) == u'L') {
			class1 = $nc(this->loader)->loadClass($(s->substring(i + 1, s->length() - 1)));
		} else {
			if (s->length() != i + 1) {
				$throwNew($ClassNotFoundException, s);
			}
			class1 = primitiveType(s->charAt(i));
		}
		$var($ints, ai, $new($ints, i));
		for (int32_t j = 0; j < i; ++j) {
			ai->set(j, 0);
		}
		return $($1Array::newInstance(class1, ai))->getClass();
	} else {
		return $nc(this->loader)->loadClass(s);
	}
}

$ClassLoader* MLetObjectInputStream::getClassLoader() {
	return this->loader;
}

MLetObjectInputStream::MLetObjectInputStream() {
}

$Class* MLetObjectInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loader", "Ljavax/management/loading/MLet;", nullptr, $PRIVATE, $field(MLetObjectInputStream, loader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;Ljavax/management/loading/MLet;)V", nullptr, $PUBLIC, $method(MLetObjectInputStream, init$, void, $InputStream*, $MLet*), "java.io.IOException,java.io.StreamCorruptedException"},
		{"getClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(MLetObjectInputStream, getClassLoader, $ClassLoader*)},
		{"primitiveType", "(C)Ljava/lang/Class;", "(C)Ljava/lang/Class<*>;", $PRIVATE, $method(MLetObjectInputStream, primitiveType, $Class*, char16_t)},
		{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(MLetObjectInputStream, resolveClass, $Class*, $ObjectStreamClass*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.loading.MLetObjectInputStream",
		"java.io.ObjectInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MLetObjectInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MLetObjectInputStream));
	});
	return class$;
}

$Class* MLetObjectInputStream::class$ = nullptr;

		} // loading
	} // management
} // javax