#include <com/sun/tools/javac/code/Types$DescriptorCache$1.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types$DescriptorCache = ::com::sun::tools::javac::code::Types$DescriptorCache;
using $Types$DescriptorCache$FunctionDescriptor = ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$DescriptorCache$1::init$($Types$DescriptorCache* this$1, $Symbol* descSym, $Symbol* val$bestSoFar) {
	$set(this, this$1, this$1);
	$set(this, val$bestSoFar, val$bestSoFar);
	$Types$DescriptorCache$FunctionDescriptor::init$(this$1, descSym);
}

$Type* Types$DescriptorCache$1::getType($Type* origin) {
	$useLocalObjectStack();
	$var($Type, mt, $nc(this->this$1->this$0)->memberType(origin, $(getSymbol())));
	return this->this$1->this$0->createMethodTypeWithThrown(mt, $($nc($nc(this->val$bestSoFar)->type)->getThrownTypes()));
}

Types$DescriptorCache$1::Types$DescriptorCache$1() {
}

$Class* Types$DescriptorCache$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/code/Types$DescriptorCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$DescriptorCache$1, this$1)},
		{"val$bestSoFar", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Types$DescriptorCache$1, val$bestSoFar)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types$DescriptorCache;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(Types$DescriptorCache$1, init$, void, $Types$DescriptorCache*, $Symbol*, $Symbol*)},
		{"getType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$DescriptorCache$1, getType, $Type*, $Type*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types$DescriptorCache",
		"mergeDescriptors",
		"(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$DescriptorCache", "com.sun.tools.javac.code.Types", "DescriptorCache", 0},
		{"com.sun.tools.javac.code.Types$DescriptorCache$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$DescriptorCache$FunctionDescriptor", "com.sun.tools.javac.code.Types$DescriptorCache", "FunctionDescriptor", 0},
		{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$DescriptorCache$1",
		"com.sun.tools.javac.code.Types$DescriptorCache$FunctionDescriptor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$DescriptorCache$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$DescriptorCache$1);
	});
	return class$;
}

$Class* Types$DescriptorCache$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com