#include <javax/naming/NameClassPair.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace javax {
	namespace naming {

void NameClassPair::init$($String* name, $String* className) {
	$set(this, fullName, nullptr);
	this->isRel = true;
	$set(this, name, name);
	$set(this, className, className);
}

void NameClassPair::init$($String* name, $String* className, bool isRelative) {
	$set(this, fullName, nullptr);
	this->isRel = true;
	$set(this, name, name);
	$set(this, className, className);
	this->isRel = isRelative;
}

$String* NameClassPair::getClassName() {
	return this->className;
}

$String* NameClassPair::getName() {
	return this->name;
}

void NameClassPair::setName($String* name) {
	$set(this, name, name);
}

void NameClassPair::setClassName($String* name) {
	$set(this, className, name);
}

bool NameClassPair::isRelative() {
	return this->isRel;
}

void NameClassPair::setRelative(bool r) {
	this->isRel = r;
}

$String* NameClassPair::getNameInNamespace() {
	if (this->fullName == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	return this->fullName;
}

void NameClassPair::setNameInNamespace($String* fullName) {
	$set(this, fullName, fullName);
}

$String* NameClassPair::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append(isRelative() ? ""_s : "(not relative)"_s);
	var$0->append($(getName()));
	var$0->append(": "_s);
	var$0->append($(getClassName()));
	return $str(var$0);
}

NameClassPair::NameClassPair() {
}

$Class* NameClassPair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameClassPair, name)},
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameClassPair, className)},
		{"fullName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameClassPair, fullName)},
		{"isRel", "Z", nullptr, $PRIVATE, $field(NameClassPair, isRel)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameClassPair, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NameClassPair, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(NameClassPair, init$, void, $String*, $String*, bool)},
		{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NameClassPair, getClassName, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NameClassPair, getName, $String*)},
		{"getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NameClassPair, getNameInNamespace, $String*)},
		{"isRelative", "()Z", nullptr, $PUBLIC, $virtualMethod(NameClassPair, isRelative, bool)},
		{"setClassName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NameClassPair, setClassName, void, $String*)},
		{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NameClassPair, setName, void, $String*)},
		{"setNameInNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NameClassPair, setNameInNamespace, void, $String*)},
		{"setRelative", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NameClassPair, setRelative, void, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NameClassPair, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.NameClassPair",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NameClassPair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NameClassPair);
	});
	return class$;
}

$Class* NameClassPair::class$ = nullptr;

	} // naming
} // javax