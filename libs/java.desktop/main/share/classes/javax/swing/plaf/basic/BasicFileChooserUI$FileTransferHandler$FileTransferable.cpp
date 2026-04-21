#include <javax/swing/plaf/basic/BasicFileChooserUI$FileTransferHandler$FileTransferable.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/util/ArrayList.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$FileTransferHandler.h>
#include <javax/swing/plaf/basic/BasicTransferable.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $BasicTransferable = ::javax::swing::plaf::basic::BasicTransferable;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicFileChooserUI$FileTransferHandler$FileTransferable::init$($String* plainData, $String* htmlData, $ObjectArray* fileData) {
	$BasicTransferable::init$(plainData, htmlData);
	$set(this, fileData, fileData);
}

$DataFlavorArray* BasicFileChooserUI$FileTransferHandler$FileTransferable::getRicherFlavors() {
	$var($DataFlavorArray, flavors, $new($DataFlavorArray, 1));
	$init($DataFlavor);
	flavors->set(0, $DataFlavor::javaFileListFlavor);
	return flavors;
}

$Object* BasicFileChooserUI$FileTransferHandler$FileTransferable::getRicherData($DataFlavor* flavor) {
	$useLocalObjectStack();
	$init($DataFlavor);
	if ($nc($DataFlavor::javaFileListFlavor)->equals(flavor)) {
		$var($ArrayList, files, $new($ArrayList));
		{
			$var($ObjectArray, arr$, this->fileData);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Object0, file, arr$->get(i$));
				{
					files->add(file);
				}
			}
		}
		return $of(files);
	}
	return nullptr;
}

BasicFileChooserUI$FileTransferHandler$FileTransferable::BasicFileChooserUI$FileTransferHandler$FileTransferable() {
}

$Class* BasicFileChooserUI$FileTransferHandler$FileTransferable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fileData", "[Ljava/lang/Object;", nullptr, 0, $field(BasicFileChooserUI$FileTransferHandler$FileTransferable, fileData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, 0, $method(BasicFileChooserUI$FileTransferHandler$FileTransferable, init$, void, $String*, $String*, $ObjectArray*)},
		{"getRicherData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(BasicFileChooserUI$FileTransferHandler$FileTransferable, getRicherData, $Object*, $DataFlavor*)},
		{"getRicherFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PROTECTED, $virtualMethod(BasicFileChooserUI$FileTransferHandler$FileTransferable, getRicherFlavors, $DataFlavorArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler", "javax.swing.plaf.basic.BasicFileChooserUI", "FileTransferHandler", $STATIC},
		{"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler$FileTransferable", "javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler", "FileTransferable", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler$FileTransferable",
		"javax.swing.plaf.basic.BasicTransferable",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicFileChooserUI"
	};
	$loadClass(BasicFileChooserUI$FileTransferHandler$FileTransferable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicFileChooserUI$FileTransferHandler$FileTransferable));
	});
	return class$;
}

$Class* BasicFileChooserUI$FileTransferHandler$FileTransferable::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax