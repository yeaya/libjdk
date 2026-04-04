#include <javax/naming/spi/ResolveResult.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeName = ::javax::naming::CompositeName;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Name = ::javax::naming::Name;

namespace javax {
	namespace naming {
		namespace spi {

void ResolveResult::init$() {
	$set(this, resolvedObj, nullptr);
	$set(this, remainingName, nullptr);
}

void ResolveResult::init$(Object$* robj, $String* rcomp) {
	$set(this, resolvedObj, robj);
	try {
		$set(this, remainingName, $new($CompositeName, rcomp));
	} catch ($InvalidNameException& e) {
	}
}

void ResolveResult::init$(Object$* robj, $Name* rname) {
	$set(this, resolvedObj, robj);
	setRemainingName(rname);
}

$Name* ResolveResult::getRemainingName() {
	return this->remainingName;
}

$Object* ResolveResult::getResolvedObj() {
	return this->resolvedObj;
}

void ResolveResult::setRemainingName($Name* name) {
	if (name != nullptr) {
		$set(this, remainingName, $cast($Name, name->clone()));
	} else {
		$set(this, remainingName, nullptr);
	}
}

void ResolveResult::appendRemainingName($Name* name) {
	if (name != nullptr) {
		if (this->remainingName != nullptr) {
			try {
				this->remainingName->addAll(name);
			} catch ($InvalidNameException& e) {
			}
		} else {
			$set(this, remainingName, $cast($Name, name->clone()));
		}
	}
}

void ResolveResult::appendRemainingComponent($String* name) {
	if (name != nullptr) {
		$var($CompositeName, rname, $new($CompositeName));
		try {
			rname->add(name);
		} catch ($InvalidNameException& e) {
		}
		appendRemainingName(rname);
	}
}

void ResolveResult::setResolvedObj(Object$* obj) {
	$set(this, resolvedObj, obj);
}

ResolveResult::ResolveResult() {
}

$Class* ResolveResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"resolvedObj", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(ResolveResult, resolvedObj)},
		{"remainingName", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(ResolveResult, remainingName)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolveResult, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ResolveResult, init$, void)},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ResolveResult, init$, void, Object$*, $String*)},
		{"<init>", "(Ljava/lang/Object;Ljavax/naming/Name;)V", nullptr, $PUBLIC, $method(ResolveResult, init$, void, Object$*, $Name*)},
		{"appendRemainingComponent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ResolveResult, appendRemainingComponent, void, $String*)},
		{"appendRemainingName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, $virtualMethod(ResolveResult, appendRemainingName, void, $Name*)},
		{"getRemainingName", "()Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(ResolveResult, getRemainingName, $Name*)},
		{"getResolvedObj", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResolveResult, getResolvedObj, $Object*)},
		{"setRemainingName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, $virtualMethod(ResolveResult, setRemainingName, void, $Name*)},
		{"setResolvedObj", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ResolveResult, setResolvedObj, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.spi.ResolveResult",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResolveResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolveResult);
	});
	return class$;
}

$Class* ResolveResult::class$ = nullptr;

		} // spi
	} // naming
} // javax