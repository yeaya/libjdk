#include <ShellFolderQueriesSecurityManagerTest.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/function/Consumer.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Consumer = ::java::util::function::Consumer;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

class ShellFolderQueriesSecurityManagerTest$$Lambda$println : public $Consumer {
	$class(ShellFolderQueriesSecurityManagerTest$$Lambda$println, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PrintStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->println(arg0);
	}
	$PrintStream* inst$ = nullptr;
};
$Class* ShellFolderQueriesSecurityManagerTest$$Lambda$println::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ShellFolderQueriesSecurityManagerTest$$Lambda$println, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(ShellFolderQueriesSecurityManagerTest$$Lambda$println, init$, void, $PrintStream*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ShellFolderQueriesSecurityManagerTest$$Lambda$println, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ShellFolderQueriesSecurityManagerTest$$Lambda$println",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ShellFolderQueriesSecurityManagerTest$$Lambda$println, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShellFolderQueriesSecurityManagerTest$$Lambda$println);
	});
	return class$;
}
$Class* ShellFolderQueriesSecurityManagerTest$$Lambda$println::class$ = nullptr;

$FileSystemView* ShellFolderQueriesSecurityManagerTest::fsv = nullptr;

void ShellFolderQueriesSecurityManagerTest::init$() {
}

void ShellFolderQueriesSecurityManagerTest::main($StringArray* args) {
	$init(ShellFolderQueriesSecurityManagerTest);
	$useLocalObjectStack();
	try {
		$var($FileArray, shortcuts, $nc(ShellFolderQueriesSecurityManagerTest::fsv)->getChooserShortcutPanelFiles());
		$$nc($Arrays::asList(shortcuts))->forEach($$new(ShellFolderQueriesSecurityManagerTest$$Lambda$println, $nc($System::out)));
		if ($nc(shortcuts)->length != 0) {
			$throwNew($RuntimeException, "Shortcut panel files leaked from SecurityManager."_s);
		}
		$var($FileArray, cbFiles, ShellFolderQueriesSecurityManagerTest::fsv->getChooserComboBoxFiles());
		$$nc($Arrays::asList(cbFiles))->forEach($$new(ShellFolderQueriesSecurityManagerTest$$Lambda$println, $System::out));
		if ($nc(cbFiles)->length != 0) {
			$throwNew($RuntimeException, "Combobox Files leaked from SecurityManager."_s);
		}
		$System::out->println("ok"_s);
	} catch ($SecurityException& e) {
		$throwNew($RuntimeException, e);
	}
}

void ShellFolderQueriesSecurityManagerTest::clinit$($Class* clazz) {
	$assignStatic(ShellFolderQueriesSecurityManagerTest::fsv, $FileSystemView::getFileSystemView());
}

ShellFolderQueriesSecurityManagerTest::ShellFolderQueriesSecurityManagerTest() {
}

$Class* ShellFolderQueriesSecurityManagerTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ShellFolderQueriesSecurityManagerTest$$Lambda$println")) {
			return ShellFolderQueriesSecurityManagerTest$$Lambda$println::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"fsv", "Ljavax/swing/filechooser/FileSystemView;", nullptr, $STATIC | $FINAL, $staticField(ShellFolderQueriesSecurityManagerTest, fsv)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ShellFolderQueriesSecurityManagerTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ShellFolderQueriesSecurityManagerTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ShellFolderQueriesSecurityManagerTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ShellFolderQueriesSecurityManagerTest, name, initialize, &classInfo$$, ShellFolderQueriesSecurityManagerTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ShellFolderQueriesSecurityManagerTest);
	});
	return class$;
}

$Class* ShellFolderQueriesSecurityManagerTest::class$ = nullptr;