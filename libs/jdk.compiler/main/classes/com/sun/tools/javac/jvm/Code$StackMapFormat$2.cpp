#include <com/sun/tools/javac/jvm/Code$StackMapFormat$2.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFormat.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

using $Code$StackMapFormat = ::com::sun::tools::javac::jvm::Code$StackMapFormat;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void Code$StackMapFormat$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Code$StackMapFormat::init$($enum$name, $enum$ordinal);
}

$Name* Code$StackMapFormat$2::getAttributeName($Names* names) {
	return $nc(names)->StackMapTable;
}

Code$StackMapFormat$2::Code$StackMapFormat$2() {
}

$Class* Code$StackMapFormat$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Code$StackMapFormat$2, init$, void, $String*, int32_t)},
		{"getAttributeName", "(Lcom/sun/tools/javac/util/Names;)Lcom/sun/tools/javac/util/Name;", nullptr, 0, $virtualMethod(Code$StackMapFormat$2, getAttributeName, $Name*, $Names*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.Code$StackMapFormat",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Code$StackMapFormat", "com.sun.tools.javac.jvm.Code", "StackMapFormat", $PUBLIC | $STATIC | $ENUM},
		{"com.sun.tools.javac.jvm.Code$StackMapFormat$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.jvm.Code$StackMapFormat$2",
		"com.sun.tools.javac.jvm.Code$StackMapFormat",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.Code"
	};
	$loadClass(Code$StackMapFormat$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Code$StackMapFormat$2));
	});
	return class$;
}

$Class* Code$StackMapFormat$2::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com