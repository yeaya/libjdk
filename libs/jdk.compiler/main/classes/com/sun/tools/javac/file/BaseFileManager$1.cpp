#include <com/sun/tools/javac/file/BaseFileManager$1.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void BaseFileManager$1::init$($BaseFileManager* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$Thread::init$(arg0);
}

void BaseFileManager$1::run() {
	try {
		$synchronized(this->this$0) {
			int64_t now = $System::currentTimeMillis();
			while (now < this->this$0->lastUsedTime + this->this$0->deferredCloseTimeout) {
				$of(this->this$0)->wait(this->this$0->lastUsedTime + this->this$0->deferredCloseTimeout - now);
				now = $System::currentTimeMillis();
			}
			this->this$0->deferredCloseTimeout = 0;
			this->this$0->close();
		}
	} catch ($InterruptedException& e) {
	} catch ($IOException& e) {
	}
}

BaseFileManager$1::BaseFileManager$1() {
}

$Class* BaseFileManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/file/BaseFileManager;", nullptr, $FINAL | $SYNTHETIC, $field(BaseFileManager$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/lang/String;)V", nullptr, 0, $method(BaseFileManager$1, init$, void, $BaseFileManager*, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BaseFileManager$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.file.BaseFileManager",
		"deferredClose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.BaseFileManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.file.BaseFileManager$1",
		"java.lang.Thread",
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
	$loadClass(BaseFileManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaseFileManager$1);
	});
	return class$;
}

$Class* BaseFileManager$1::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com