#include <javax/xml/crypto/dsig/spec/ExcC14NParameterSpec.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$String* ExcC14NParameterSpec::DEFAULT = nullptr;

void ExcC14NParameterSpec::init$() {
	$set(this, prefixList, $Collections::emptyList());
}

void ExcC14NParameterSpec::init$($List* prefixList) {
	$useLocalObjectStack();
	if (prefixList == nullptr) {
		$throwNew($NullPointerException, "prefixList cannot be null"_s);
	}
	$var($List, tempList, $Collections::checkedList($$new($ArrayList), $String::class$));
	$nc(tempList)->addAll(prefixList);
	$set(this, prefixList, $Collections::unmodifiableList(tempList));
}

$List* ExcC14NParameterSpec::getPrefixList() {
	return this->prefixList;
}

ExcC14NParameterSpec::ExcC14NParameterSpec() {
}

void ExcC14NParameterSpec::clinit$($Class* clazz) {
	$assignStatic(ExcC14NParameterSpec::DEFAULT, "#default"_s);
}

$Class* ExcC14NParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prefixList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ExcC14NParameterSpec, prefixList)},
		{"DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExcC14NParameterSpec, DEFAULT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExcC14NParameterSpec, init$, void)},
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(ExcC14NParameterSpec, init$, void, $List*)},
		{"getPrefixList", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(ExcC14NParameterSpec, getPrefixList, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.xml.crypto.dsig.spec.ExcC14NParameterSpec",
		"java.lang.Object",
		"javax.xml.crypto.dsig.spec.C14NMethodParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExcC14NParameterSpec, name, initialize, &classInfo$$, ExcC14NParameterSpec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExcC14NParameterSpec);
	});
	return class$;
}

$Class* ExcC14NParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax