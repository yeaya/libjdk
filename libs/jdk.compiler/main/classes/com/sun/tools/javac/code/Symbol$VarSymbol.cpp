#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol$1.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Constants.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/concurrent/Callable.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef BINDING_VARIABLE
#undef ENUM_CONSTANT
#undef ERR
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef LOCAL_VARIABLE
#undef NOPOS
#undef PARAMETER
#undef RESOURCE_VARIABLE
#undef TYP
#undef VAR

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$VarSymbol$1 = ::com::sun::tools::javac::code::Symbol$VarSymbol$1;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Constants = ::com::sun::tools::javac::util::Constants;
using $Name = ::com::sun::tools::javac::util::Name;
using $Position = ::com::sun::tools::javac::util::Position;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Callable = ::java::util::concurrent::Callable;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $1Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0 : public $Callable {
	$class(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, $NO_CLASS_INIT, $Callable)
public:
	void init$(Symbol$VarSymbol* inst, $Attr* attr, $Env* env, $JCTree$JCVariableDecl* variable) {
		$set(this, inst$, inst);
		$set(this, attr, attr);
		$set(this, env, env);
		$set(this, variable, variable);
	}
	virtual $Object* call() override {
		return $nc(inst$)->lambda$setLazyConstValue$0(attr, env, variable);
	}
	Symbol$VarSymbol* inst$ = nullptr;
	$Attr* attr = nullptr;
	$Env* env = nullptr;
	$JCTree$JCVariableDecl* variable = nullptr;
};
$Class* Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, inst$)},
		{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PUBLIC, $field(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, attr)},
		{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, env)},
		{"variable", "Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC, $field(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, variable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC, $method(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, init$, void, Symbol$VarSymbol*, $Attr*, $Env*, $JCTree$JCVariableDecl*)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, call, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0);
	});
	return class$;
}
$Class* Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::class$ = nullptr;

$Set* Symbol$VarSymbol::getModifiers() {
	return this->$Symbol::getModifiers();
}

$List* Symbol$VarSymbol::getEnclosedElements() {
	return this->$Symbol::getEnclosedElements();
}

$AnnotationArray* Symbol$VarSymbol::getAnnotationsByType($Class* annoType) {
	return this->$Symbol::getAnnotationsByType(annoType);
}

$Annotation* Symbol$VarSymbol::getAnnotation($Class* annoType) {
	return this->$Symbol::getAnnotation(annoType);
}

int32_t Symbol$VarSymbol::hashCode() {
	return this->$Symbol::hashCode();
}

bool Symbol$VarSymbol::equals(Object$* arg0) {
	return this->$Symbol::equals(arg0);
}

$Object* Symbol$VarSymbol::clone() {
	return this->$Symbol::clone();
}

void Symbol$VarSymbol::finalize() {
	this->$Symbol::finalize();
}

void Symbol$VarSymbol::init$(int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	$init($Kinds$Kind);
	$Symbol::init$($Kinds$Kind::VAR, flags, name, type, owner);
	this->pos = $Position::NOPOS;
	this->adr = -1;
}

int32_t Symbol$VarSymbol::poolTag() {
	return $ClassFile::CONSTANT_Fieldref;
}

$Symbol$MethodHandleSymbol* Symbol$VarSymbol::asMethodHandle(bool getter) {
	return $new($Symbol$MethodHandleSymbol, this, getter);
}

Symbol$VarSymbol* Symbol$VarSymbol::clone($Symbol* newOwner) {
	$var(Symbol$VarSymbol, v, $new($Symbol$VarSymbol$1, this, this->flags_field, this->name, this->type, newOwner, newOwner));
	v->pos = this->pos;
	v->adr = this->adr;
	$set(v, data, this->data);
	return v;
}

$String* Symbol$VarSymbol::toString() {
	return $nc(this->name)->toString();
}

$Symbol* Symbol$VarSymbol::asMemberOf($Type* site, $Types* types) {
	return $new(Symbol$VarSymbol, this->flags_field, this->name, $($nc(types)->memberType(site, this)), this->owner);
}

$ElementKind* Symbol$VarSymbol::getKind() {
	int64_t flags = this->flags();
	if ((flags & (int64_t)0x0000000200000000) != 0) {
		if (isExceptionParameter()) {
			$init($ElementKind);
			return $ElementKind::EXCEPTION_PARAMETER;
		} else {
			$init($ElementKind);
			return $ElementKind::PARAMETER;
		}
	} else if ((flags & 0x4000) != 0) {
		$init($ElementKind);
		return $ElementKind::ENUM_CONSTANT;
	} else {
		$init($Kinds$Kind);
		if ($nc(this->owner)->kind == $Kinds$Kind::TYP || this->owner->kind == $Kinds$Kind::ERR) {
			$init($ElementKind);
			return $ElementKind::FIELD;
		} else if (isResourceVariable()) {
			$init($ElementKind);
			return $ElementKind::RESOURCE_VARIABLE;
		} else if ((flags & (int64_t)0x0800000000000000) != 0) {
			$init($ElementKind);
			$ElementKind* kind = $ElementKind::BINDING_VARIABLE;
			return kind;
		} else {
			$init($ElementKind);
			return $ElementKind::LOCAL_VARIABLE;
		}
	}
}

$Object* Symbol$VarSymbol::accept($ElementVisitor* v, Object$* p) {
	return $nc(v)->visitVariable(this, p);
}

$Object* Symbol$VarSymbol::getConstantValue() {
	return $Constants::decode($(getConstValue()), this->type);
}

void Symbol$VarSymbol::setLazyConstValue($Env* env, $Attr* attr, $JCTree$JCVariableDecl* variable) {
	setData($cast($Callable, $$new(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, this, attr, env, variable)));
}

bool Symbol$VarSymbol::isExceptionParameter() {
	$init($ElementKind);
	return $equals(this->data, $ElementKind::EXCEPTION_PARAMETER);
}

bool Symbol$VarSymbol::isResourceVariable() {
	$init($ElementKind);
	return $equals(this->data, $ElementKind::RESOURCE_VARIABLE);
}

$Object* Symbol$VarSymbol::getConstValue() {
	$useLocalObjectStack();
	{
		$var($Callable, callableData, nullptr);
		$init($ElementKind);
		if ($equals(this->data, $ElementKind::EXCEPTION_PARAMETER) || $equals(this->data, $ElementKind::RESOURCE_VARIABLE)) {
			return nullptr;
		} else {
			$var($Object, patt60317$temp, this->data);
			bool var$0 = $instanceOf($Callable, patt60317$temp);
			if (var$0) {
				$assign(callableData, $cast($Callable, patt60317$temp));
				var$0 = true;
			}
			if (var$0) {
				$set(this, data, nullptr);
				try {
					$set(this, data, $nc(callableData)->call());
				} catch ($Exception& ex) {
					$throwNew($AssertionError, $of(ex));
				}
			}
		}
	}
	return this->data;
}

void Symbol$VarSymbol::setData(Object$* data) {
	$Assert::check(!($instanceOf($Env, data)), this);
	$set(this, data, data);
}

$Object* Symbol$VarSymbol::accept($Symbol$Visitor* v, Object$* p) {
	return $nc(v)->visitVarSymbol(this, p);
}

$List* Symbol$VarSymbol::getAnnotationMirrors() {
	return $Symbol::getAnnotationMirrors();
}

$Element* Symbol$VarSymbol::getEnclosingElement() {
	return $Symbol::getEnclosingElement();
}

$1Name* Symbol$VarSymbol::getSimpleName() {
	return $Symbol::getSimpleName();
}

$TypeMirror* Symbol$VarSymbol::asType() {
	return $Symbol::asType();
}

$Object* Symbol$VarSymbol::lambda$setLazyConstValue$0($Attr* attr, $Env* env, $JCTree$JCVariableDecl* variable) {
	return $nc(attr)->attribLazyConstantValue(env, variable, this->type);
}

Symbol$VarSymbol::Symbol$VarSymbol() {
}

$Class* Symbol$VarSymbol::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.code.Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0")) {
			return Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"pos", "I", nullptr, $PUBLIC, $field(Symbol$VarSymbol, pos)},
		{"adr", "I", nullptr, $PUBLIC, $field(Symbol$VarSymbol, adr)},
		{"data", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Symbol$VarSymbol, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
		{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
		{"*getEnclosedElements", "()Ljava/util/List;", nullptr, $PUBLIC},
		{"*getModifiers", "()Ljava/util/Set;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Symbol$VarSymbol, init$, void, int64_t, $Name*, $Type*, $Symbol*)},
		{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Symbol$VarSymbol, accept, $Object*, $ElementVisitor*, Object$*)},
		{"accept", "(Lcom/sun/tools/javac/code/Symbol$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Symbol$VarSymbol, accept, $Object*, $Symbol$Visitor*, Object$*)},
		{"asMemberOf", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, asMemberOf, $Symbol*, $Type*, $Types*)},
		{"asMethodHandle", "(Z)Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, asMethodHandle, $Symbol$MethodHandleSymbol*, bool)},
		{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Symbol$VarSymbol, asType, $TypeMirror*)},
		{"clone", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, clone, Symbol$VarSymbol*, $Symbol*)},
		{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Symbol$VarSymbol, getAnnotationMirrors, $List*)},
		{"getConstValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, getConstValue, $Object*)},
		{"getConstantValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, getConstantValue, $Object*)},
		{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Symbol$VarSymbol, getEnclosingElement, $Element*)},
		{"getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, getKind, $ElementKind*)},
		{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Symbol$VarSymbol, getSimpleName, $1Name*)},
		{"isExceptionParameter", "()Z", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, isExceptionParameter, bool)},
		{"isResourceVariable", "()Z", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, isResourceVariable, bool)},
		{"lambda$setLazyConstValue$0", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(Symbol$VarSymbol, lambda$setLazyConstValue$0, $Object*, $Attr*, $Env*, $JCTree$JCVariableDecl*), "java.lang.Exception"},
		{"poolTag", "()I", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, poolTag, int32_t)},
		{"setData", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, setData, void, Object$*)},
		{"setLazyConstValue", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", $PUBLIC, $virtualMethod(Symbol$VarSymbol, setLazyConstValue, void, $Env*, $Attr*, $JCTree$JCVariableDecl*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Symbol$VarSymbol$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Symbol$VarSymbol",
		"com.sun.tools.javac.code.Symbol",
		"javax.lang.model.element.VariableElement",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Symbol"
	};
	$loadClass(Symbol$VarSymbol, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Symbol$VarSymbol));
	});
	return class$;
}

$Class* Symbol$VarSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com