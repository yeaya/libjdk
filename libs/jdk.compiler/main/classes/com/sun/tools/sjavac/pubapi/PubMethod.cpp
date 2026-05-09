#include <com/sun/tools/sjavac/pubapi/PubMethod.h>
#include <com/sun/tools/sjavac/pubapi/PubApiTypeParam.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $PubApiTypeParam = ::com::sun::tools::sjavac::pubapi::PubApiTypeParam;
using $TypeDesc = ::com::sun::tools::sjavac::pubapi::TypeDesc;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class PubMethod$$Lambda$asString : public $Function {
	$class(PubMethod$$Lambda$asString, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $of($sure($PubApiTypeParam, inst$)->asString());
	}
};
$Class* PubMethod$$Lambda$asString::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PubMethod$$Lambda$asString, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PubMethod$$Lambda$asString, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.pubapi.PubMethod$$Lambda$asString",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(PubMethod$$Lambda$asString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PubMethod$$Lambda$asString);
	});
	return class$;
}
$Class* PubMethod$$Lambda$asString::class$ = nullptr;

class PubMethod$$Lambda$encodeAsString$1 : public $Function {
	$class(PubMethod$$Lambda$encodeAsString$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* td) override {
		return $of($TypeDesc::encodeAsString($cast($TypeDesc, td)));
	}
};
$Class* PubMethod$$Lambda$encodeAsString$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PubMethod$$Lambda$encodeAsString$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PubMethod$$Lambda$encodeAsString$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.pubapi.PubMethod$$Lambda$encodeAsString$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(PubMethod$$Lambda$encodeAsString$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PubMethod$$Lambda$encodeAsString$1);
	});
	return class$;
}
$Class* PubMethod$$Lambda$encodeAsString$1::class$ = nullptr;

void PubMethod::init$($Set* modifiers, $List* typeParams, $TypeDesc* returnType, $String* identifier, $List* paramTypes, $List* throwDecls) {
	$set(this, modifiers, modifiers);
	$set(this, typeParams, typeParams);
	$set(this, returnType, returnType);
	$set(this, identifier, identifier);
	$set(this, paramTypes, paramTypes);
	$set(this, throwDecls, throwDecls);
}

$String* PubMethod::asSignatureString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	if ($nc(this->typeParams)->size() > 0) {
		sb->append($$cast($String, $$nc($$nc(this->typeParams->stream())->map($$new(PubMethod$$Lambda$asString)))->collect($($Collectors::joining(","_s, "<"_s, "> "_s)))));
	}
	sb->append($($TypeDesc::encodeAsString(this->returnType)));
	sb->append(" "_s);
	sb->append(this->identifier);
	sb->append("("_s);
	sb->append($$cast($String, $$nc($$nc($nc(this->paramTypes)->stream())->map($$new(PubMethod$$Lambda$encodeAsString$1)))->collect($($Collectors::joining(","_s)))));
	sb->append(")"_s);
	return sb->toString();
}

bool PubMethod::equals(Object$* obj) {
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var(PubMethod, other, $cast(PubMethod, obj));
	bool var$4 = $nc(this->modifiers)->equals(other->modifiers);
	bool var$3 = var$4 && $nc(this->typeParams)->equals(other->typeParams);
	bool var$2 = var$3 && $nc(this->returnType)->equals(other->returnType);
	bool var$1 = var$2 && $nc(this->identifier)->equals(other->identifier);
	bool var$0 = var$1 && $nc(this->paramTypes)->equals(other->paramTypes);
	return var$0 && $nc(this->throwDecls)->equals(other->throwDecls);
}

int32_t PubMethod::hashCode() {
	int32_t var$4 = $nc(this->modifiers)->hashCode();
	int32_t var$3 = var$4 ^ $nc(this->typeParams)->hashCode();
	int32_t var$2 = var$3 ^ $nc(this->returnType)->hashCode();
	int32_t var$1 = var$2 ^ $nc(this->identifier)->hashCode();
	int32_t var$0 = var$1 ^ $nc(this->paramTypes)->hashCode();
	return var$0 ^ $nc(this->throwDecls)->hashCode();
}

$String* PubMethod::toString() {
	$useLocalObjectStack();
	return $String::format("%s[modifiers: %s, typeParams: %s, retType: %s, identifier: %s, params: %s, throws: %s]"_s, $$new($ObjectArray, {
		$($of(this)->getClass()->getSimpleName()),
		this->modifiers,
		this->typeParams,
		this->returnType,
		this->identifier,
		this->paramTypes,
		this->throwDecls
	}));
}

PubMethod::PubMethod() {
}

$Class* PubMethod::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.sjavac.pubapi.PubMethod$$Lambda$asString")) {
			return PubMethod$$Lambda$asString::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.sjavac.pubapi.PubMethod$$Lambda$encodeAsString$1")) {
			return PubMethod$$Lambda$encodeAsString$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PubMethod, serialVersionUID)},
		{"modifiers", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", 0, $field(PubMethod, modifiers)},
		{"typeParams", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/PubApiTypeParam;>;", 0, $field(PubMethod, typeParams)},
		{"returnType", "Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, 0, $field(PubMethod, returnType)},
		{"identifier", "Ljava/lang/String;", nullptr, 0, $field(PubMethod, identifier)},
		{"paramTypes", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/TypeDesc;>;", 0, $field(PubMethod, paramTypes)},
		{"throwDecls", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/TypeDesc;>;", 0, $field(PubMethod, throwDecls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;Ljava/util/List;Lcom/sun/tools/sjavac/pubapi/TypeDesc;Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V", "(Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/PubApiTypeParam;>;Lcom/sun/tools/sjavac/pubapi/TypeDesc;Ljava/lang/String;Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/TypeDesc;>;Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/TypeDesc;>;)V", $PUBLIC, $method(PubMethod, init$, void, $Set*, $List*, $TypeDesc*, $String*, $List*, $List*)},
		{"asSignatureString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PubMethod, asSignatureString, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PubMethod, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PubMethod, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PubMethod, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.pubapi.PubMethod",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PubMethod, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PubMethod);
	});
	return class$;
}

$Class* PubMethod::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com