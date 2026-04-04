#include <com/sun/tools/javac/file/BaseFileManager$2.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $Option = ::com::sun::tools::javac::main::Option;
using $OptionHelper$GrumpyHelper = ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void BaseFileManager$2::init$($BaseFileManager* this$0, $Log* log) {
	$set(this, this$0, this$0);
	$OptionHelper$GrumpyHelper::init$(log);
}

$String* BaseFileManager$2::get($Option* option) {
	return $nc(this->this$0->options)->get(option);
}

void BaseFileManager$2::put($String* name, $String* value) {
	$nc(this->this$0->options)->put(name, value);
}

void BaseFileManager$2::remove($String* name) {
	$nc(this->this$0->options)->remove(name);
}

bool BaseFileManager$2::handleFileManagerOption($Option* option, $String* value) {
	return this->this$0->handleOption(option, value);
}

BaseFileManager$2::BaseFileManager$2() {
}

$Class* BaseFileManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/file/BaseFileManager;", nullptr, $FINAL | $SYNTHETIC, $field(BaseFileManager$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;Lcom/sun/tools/javac/util/Log;)V", nullptr, 0, $method(BaseFileManager$2, init$, void, $BaseFileManager*, $Log*)},
		{"get", "(Lcom/sun/tools/javac/main/Option;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BaseFileManager$2, get, $String*, $Option*)},
		{"handleFileManagerOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(BaseFileManager$2, handleFileManagerOption, bool, $Option*, $String*)},
		{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseFileManager$2, put, void, $String*, $String*)},
		{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseFileManager$2, remove, void, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.file.BaseFileManager",
		"handleOption",
		"(Ljava/lang/String;Ljava/util/Iterator;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.BaseFileManager$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.main.OptionHelper$GrumpyHelper", "com.sun.tools.javac.main.OptionHelper", "GrumpyHelper", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.file.BaseFileManager$2",
		"com.sun.tools.javac.main.OptionHelper$GrumpyHelper",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.file.BaseFileManager"
	};
	$loadClass(BaseFileManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaseFileManager$2);
	});
	return class$;
}

$Class* BaseFileManager$2::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com