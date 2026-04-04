#include <javax/swing/text/ChangedCharSetException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

void ChangedCharSetException::init$($String* charSetSpec, bool charSetKey) {
	$IOException::init$();
	$set(this, charSetSpec, charSetSpec);
	this->charSetKey = charSetKey;
}

$String* ChangedCharSetException::getCharSetSpec() {
	return this->charSetSpec;
}

bool ChangedCharSetException::keyEqualsCharSet() {
	return this->charSetKey;
}

ChangedCharSetException::ChangedCharSetException() {
}

ChangedCharSetException::ChangedCharSetException(const ChangedCharSetException& e) : $IOException(e) {
}

void ChangedCharSetException::throw$() {
	throw *this;
}

$Class* ChangedCharSetException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"charSetSpec", "Ljava/lang/String;", nullptr, 0, $field(ChangedCharSetException, charSetSpec)},
		{"charSetKey", "Z", nullptr, 0, $field(ChangedCharSetException, charSetKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(ChangedCharSetException, init$, void, $String*, bool)},
		{"getCharSetSpec", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ChangedCharSetException, getCharSetSpec, $String*)},
		{"keyEqualsCharSet", "()Z", nullptr, $PUBLIC, $virtualMethod(ChangedCharSetException, keyEqualsCharSet, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.ChangedCharSetException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ChangedCharSetException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChangedCharSetException);
	});
	return class$;
}

$Class* ChangedCharSetException::class$ = nullptr;

		} // text
	} // swing
} // javax