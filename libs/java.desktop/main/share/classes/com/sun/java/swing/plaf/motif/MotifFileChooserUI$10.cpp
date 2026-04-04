#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$10.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifFileChooserUI$10::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void MotifFileChooserUI$10::mouseClicked($MouseEvent* e) {
	$useLocalObjectStack();
	$var($JFileChooser, chooser, this->this$0->getFileChooser());
	bool var$0 = $SwingUtilities::isLeftMouseButton(e);
	if (var$0 && !$nc(chooser)->isMultiSelectionEnabled()) {
		int32_t index = $SwingUtilities2::loc2IndexFileList(this->this$0->fileList, $($nc(e)->getPoint()));
		if (index >= 0) {
			$var($File, file, $cast($File, $$nc($nc(this->this$0->fileList)->getModel())->getElementAt(index)));
			this->this$0->setFileName($(chooser->getName(file)));
		}
	}
}

MotifFileChooserUI$10::MotifFileChooserUI$10() {
}

$Class* MotifFileChooserUI$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$10, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, 0, $method(MotifFileChooserUI$10, init$, void, $MotifFileChooserUI*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$10, mouseClicked, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI",
		"createFilesList",
		"()Ljavax/swing/JScrollPane;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI$10",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
	};
	$loadClass(MotifFileChooserUI$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifFileChooserUI$10));
	});
	return class$;
}

$Class* MotifFileChooserUI$10::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com