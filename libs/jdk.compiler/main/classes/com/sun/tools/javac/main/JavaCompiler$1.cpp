#include <com/sun/tools/javac/main/JavaCompiler$1.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <jcpp.h>

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

void JavaCompiler$1::init$($JavaCompiler* this$0, $Kinds$Kind* kind, int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	$set(this, this$0, this$0);
	$Symbol::init$(kind, flags, name, type, owner);
}

$Object* JavaCompiler$1::accept($ElementVisitor* v, Object$* p) {
	return $nc(v)->visitUnknown(this, p);
}

bool JavaCompiler$1::exists() {
	return false;
}

JavaCompiler$1::JavaCompiler$1() {
}

$Class* JavaCompiler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/main/JavaCompiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavaCompiler$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/main/JavaCompiler;Lcom/sun/tools/javac/code/Kinds$Kind;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(JavaCompiler$1, init$, void, $JavaCompiler*, $Kinds$Kind*, int64_t, $Name*, $Type*, $Symbol*)},
		{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(JavaCompiler$1, accept, $Object*, $ElementVisitor*, Object$*)},
		{"exists", "()Z", nullptr, $PUBLIC, $virtualMethod(JavaCompiler$1, exists, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.JavaCompiler",
		"<init>",
		"(Lcom/sun/tools/javac/util/Context;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.JavaCompiler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.main.JavaCompiler$1",
		"com.sun.tools.javac.code.Symbol",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.JavaCompiler"
	};
	$loadClass(JavaCompiler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavaCompiler$1));
	});
	return class$;
}

$Class* JavaCompiler$1::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com