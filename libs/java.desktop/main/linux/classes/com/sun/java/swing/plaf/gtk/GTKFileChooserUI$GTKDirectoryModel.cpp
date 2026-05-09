#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKDirectoryModel.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Comparator.h>
#include <java/util/Vector.h>
#include <java/util/function/Function.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Comparator = ::java::util::Comparator;
using $Vector = ::java::util::Vector;
using $Function = ::java::util::function::Function;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName : public $Function {
	$class(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName, $NO_CLASS_INIT, $Function)
public:
	void init$($FileSystemView* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* f) override {
		return $of($nc(inst$)->getSystemDisplayName($cast($File, f)));
	}
	$FileSystemView* inst$ = nullptr;
};
$Class* GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PUBLIC, $method(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName, init$, void, $FileSystemView*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName);
	});
	return class$;
}
$Class* GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::class$ = nullptr;

void GTKFileChooserUI$GTKDirectoryModel::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$BasicDirectoryModel::init$($(this$0->getFileChooser()));
}

void GTKFileChooserUI$GTKDirectoryModel::sort($Vector* v) {
	$useLocalObjectStack();
	$var($FileSystemView, fsv, $$nc(this->this$0->getFileChooser())->getFileSystemView());
	if (fsv == nullptr) {
		$BasicDirectoryModel::sort(v);
	} else {
		$nc(v)->sort($($Comparator::comparing($$new(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName, fsv))));
	}
}

GTKFileChooserUI$GTKDirectoryModel::GTKFileChooserUI$GTKDirectoryModel() {
}

$Class* GTKFileChooserUI$GTKDirectoryModel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName")) {
			return GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$GTKDirectoryModel, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PRIVATE, $method(GTKFileChooserUI$GTKDirectoryModel, init$, void, $GTKFileChooserUI*)},
		{"sort", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<+Ljava/io/File;>;)V", $PROTECTED, $virtualMethod(GTKFileChooserUI$GTKDirectoryModel, sort, void, $Vector*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKDirectoryModel", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryModel",
		"javax.swing.plaf.basic.BasicDirectoryModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
	};
	$loadClass(GTKFileChooserUI$GTKDirectoryModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKFileChooserUI$GTKDirectoryModel));
	});
	return class$;
}

$Class* GTKFileChooserUI$GTKDirectoryModel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com