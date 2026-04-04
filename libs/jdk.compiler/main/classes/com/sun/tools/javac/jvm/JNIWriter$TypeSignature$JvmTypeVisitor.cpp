#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature$JvmTypeVisitor.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/JNIWriter$1.h>
#include <com/sun/tools/javac/jvm/JNIWriter$SimpleTypeVisitor.h>
#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $JNIWriter$1 = ::com::sun::tools::javac::jvm::JNIWriter$1;
using $JNIWriter$SimpleTypeVisitor = ::com::sun::tools::javac::jvm::JNIWriter$SimpleTypeVisitor;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void JNIWriter$TypeSignature$JvmTypeVisitor::init$(bool useFlatname) {
	$JNIWriter$SimpleTypeVisitor::init$();
	this->useFlatname = useFlatname;
}

$Type* JNIWriter$TypeSignature$JvmTypeVisitor::visitClassType($Type$ClassType* t, $StringBuilder* s) {
	setDeclaredType(t, s);
	return nullptr;
}

$Type* JNIWriter$TypeSignature$JvmTypeVisitor::visitArrayType($Type$ArrayType* t, $StringBuilder* s) {
	$nc(s)->append("["_s);
	return $cast($Type, $$sure($Type, $nc(t)->getComponentType())->accept(this, s));
}

$Type* JNIWriter$TypeSignature$JvmTypeVisitor::visitType($Type* t, $StringBuilder* s) {
	if ($nc(t)->isPrimitiveOrVoid()) {
		$nc(s)->append($(getJvmPrimitiveSignature(t)));
		return nullptr;
	}
	return $cast($Type, t->accept(this, s));
}

void JNIWriter$TypeSignature$JvmTypeVisitor::setDeclaredType($Type* t, $StringBuilder* s) {
	$useLocalObjectStack();
	$var($String, classname, this->useFlatname ? $$nc($nc($nc(t)->tsym)->flatName())->toString() : $$nc($nc($nc(t)->tsym)->getQualifiedName())->toString());
	$assign(classname, $nc(classname)->replace(u'.', u'/'));
	$nc(s)->append("L"_s)->append(classname)->append(";"_s);
}

$String* JNIWriter$TypeSignature$JvmTypeVisitor::getJvmPrimitiveSignature($Type* t) {
	$init($JNIWriter$1);
	switch ($nc($JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind)->get(($$nc($nc(t)->getKind()))->ordinal())) {
	case 11:
		return "V"_s;
	case 1:
		return "Z"_s;
	case 2:
		return "B"_s;
	case 6:
		return "C"_s;
	case 3:
		return "S"_s;
	case 4:
		return "I"_s;
	case 5:
		return "J"_s;
	case 7:
		return "F"_s;
	case 8:
		return "D"_s;
	default:
		$Assert::error("unknown type: should not happen"_s);
	}
	return nullptr;
}

$Object* JNIWriter$TypeSignature$JvmTypeVisitor::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($StringBuilder, s)));
}

$Object* JNIWriter$TypeSignature$JvmTypeVisitor::visitArrayType($Type$ArrayType* t, Object$* s) {
	return $of(this->visitArrayType(t, $cast($StringBuilder, s)));
}

$Object* JNIWriter$TypeSignature$JvmTypeVisitor::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(this->visitClassType(t, $cast($StringBuilder, s)));
}

JNIWriter$TypeSignature$JvmTypeVisitor::JNIWriter$TypeSignature$JvmTypeVisitor() {
}

$Class* JNIWriter$TypeSignature$JvmTypeVisitor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"useFlatname", "Z", nullptr, $PRIVATE | $FINAL, $field(JNIWriter$TypeSignature$JvmTypeVisitor, useFlatname)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(JNIWriter$TypeSignature$JvmTypeVisitor, init$, void, bool)},
		{"getJvmPrimitiveSignature", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PRIVATE, $method(JNIWriter$TypeSignature$JvmTypeVisitor, getJvmPrimitiveSignature, $String*, $Type*)},
		{"setDeclaredType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(JNIWriter$TypeSignature$JvmTypeVisitor, setDeclaredType, void, $Type*, $StringBuilder*)},
		{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/StringBuilder;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(JNIWriter$TypeSignature$JvmTypeVisitor, visitArrayType, $Type*, $Type$ArrayType*, $StringBuilder*)},
		{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JNIWriter$TypeSignature$JvmTypeVisitor, visitArrayType, $Object*, $Type$ArrayType*, Object$*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/StringBuilder;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(JNIWriter$TypeSignature$JvmTypeVisitor, visitClassType, $Type*, $Type$ClassType*, $StringBuilder*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JNIWriter$TypeSignature$JvmTypeVisitor, visitClassType, $Object*, $Type$ClassType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/StringBuilder;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(JNIWriter$TypeSignature$JvmTypeVisitor, visitType, $Type*, $Type*, $StringBuilder*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JNIWriter$TypeSignature$JvmTypeVisitor, visitType, $Object*, $Type*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "com.sun.tools.javac.jvm.JNIWriter", "TypeSignature", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature$JvmTypeVisitor", "com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "JvmTypeVisitor", $STATIC},
		{"com.sun.tools.javac.jvm.JNIWriter$SimpleTypeVisitor", "com.sun.tools.javac.jvm.JNIWriter", "SimpleTypeVisitor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.JNIWriter$TypeSignature$JvmTypeVisitor",
		"com.sun.tools.javac.jvm.JNIWriter$SimpleTypeVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/jvm/JNIWriter$SimpleTypeVisitor<Lcom/sun/tools/javac/code/Type;Ljava/lang/StringBuilder;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.JNIWriter"
	};
	$loadClass(JNIWriter$TypeSignature$JvmTypeVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JNIWriter$TypeSignature$JvmTypeVisitor);
	});
	return class$;
}

$Class* JNIWriter$TypeSignature$JvmTypeVisitor::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com