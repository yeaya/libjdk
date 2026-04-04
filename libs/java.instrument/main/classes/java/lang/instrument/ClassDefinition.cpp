#include <java/lang/instrument/ClassDefinition.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace lang {
		namespace instrument {

void ClassDefinition::init$($Class* theClass, $bytes* theClassFile) {
	if (theClass == nullptr || theClassFile == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mClass, theClass);
	$set(this, mClassFile, theClassFile);
}

$Class* ClassDefinition::getDefinitionClass() {
	return this->mClass;
}

$bytes* ClassDefinition::getDefinitionClassFile() {
	return this->mClassFile;
}

ClassDefinition::ClassDefinition() {
}

$Class* ClassDefinition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ClassDefinition, mClass)},
		{"mClassFile", "[B", nullptr, $PRIVATE | $FINAL, $field(ClassDefinition, mClassFile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;[B)V", "(Ljava/lang/Class<*>;[B)V", $PUBLIC, $method(ClassDefinition, init$, void, $Class*, $bytes*)},
		{"getDefinitionClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(ClassDefinition, getDefinitionClass, $Class*)},
		{"getDefinitionClassFile", "()[B", nullptr, $PUBLIC, $method(ClassDefinition, getDefinitionClassFile, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.instrument.ClassDefinition",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassDefinition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassDefinition);
	});
	return class$;
}

$Class* ClassDefinition::class$ = nullptr;

		} // instrument
	} // lang
} // java