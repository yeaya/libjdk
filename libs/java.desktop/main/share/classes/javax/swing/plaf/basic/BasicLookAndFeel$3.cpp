#include <javax/swing/plaf/basic/BasicLookAndFeel$3.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicLookAndFeel$3::init$($BasicLookAndFeel* this$0, $String* val$soundFile) {
	$set(this, this$0, this$0);
	$set(this, val$soundFile, val$soundFile);
}

$Object* BasicLookAndFeel$3::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($InputStream, resource, $of(this->this$0)->getClass()->getResourceAsStream(this->val$soundFile));
		if (resource == nullptr) {
			return nullptr;
		}
		{
			$var($BufferedInputStream, in, $new($BufferedInputStream, resource));
			$var($Throwable, var$0, nullptr);
			$var($Object, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, in->readAllBytes());
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException& ioe) {
		$nc($System::err)->println($(ioe->toString()));
		return nullptr;
	}
	$shouldNotReachHere();
}

BasicLookAndFeel$3::BasicLookAndFeel$3() {
}

$Class* BasicLookAndFeel$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicLookAndFeel$3, this$0)},
		{"val$soundFile", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BasicLookAndFeel$3, val$soundFile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicLookAndFeel;Ljava/lang/String;)V", "()V", 0, $method(BasicLookAndFeel$3, init$, void, $BasicLookAndFeel*, $String*)},
		{"run", "()[B", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicLookAndFeel",
		"loadAudioData",
		"(Ljava/lang/String;)[B"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicLookAndFeel$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicLookAndFeel$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<[B>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicLookAndFeel"
	};
	$loadClass(BasicLookAndFeel$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$3);
	});
	return class$;
}

$Class* BasicLookAndFeel$3::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax