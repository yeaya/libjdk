#include <javax/management/BadAttributeValueExpException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

void BadAttributeValueExpException::init$(Object$* val) {
	$Exception::init$();
	$set(this, val, val == nullptr ? ($String*)nullptr : $of(val)->toString());
}

$String* BadAttributeValueExpException::toString() {
	return $str({"BadAttributeValueException: "_s, this->val});
}

void BadAttributeValueExpException::readObject($ObjectInputStream* ois) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, gf, $nc(ois)->readFields());
	$var($Object, valObj, $nc(gf)->get("val"_s, nullptr));
	if ($instanceOf($String, valObj) || valObj == nullptr) {
		$set(this, val, $cast($String, valObj));
	} else {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($System::identityHashCode(valObj));
		var$0->append("@"_s);
		var$0->append($(valObj->getClass()->getName()));
		$set(this, val, $str(var$0));
	}
}

BadAttributeValueExpException::BadAttributeValueExpException() {
}

BadAttributeValueExpException::BadAttributeValueExpException(const BadAttributeValueExpException& e) : $Exception(e) {
}

void BadAttributeValueExpException::throw$() {
	throw *this;
}

$Class* BadAttributeValueExpException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BadAttributeValueExpException, serialVersionUID)},
		{"val", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BadAttributeValueExpException, val)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(BadAttributeValueExpException, init$, void, Object$*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(BadAttributeValueExpException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BadAttributeValueExpException, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.BadAttributeValueExpException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BadAttributeValueExpException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BadAttributeValueExpException);
	});
	return class$;
}

$Class* BadAttributeValueExpException::class$ = nullptr;

	} // management
} // javax