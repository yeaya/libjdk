#include <com/apple/laf/AquaFileChooserUI$DirectoryComboBoxModel.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/io/File.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $ListDataListener = ::javax::swing::event::ListDataListener;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$DirectoryComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void AquaFileChooserUI$DirectoryComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t AquaFileChooserUI$DirectoryComboBoxModel::hashCode() {
	return this->$AbstractListModel::hashCode();
}

bool AquaFileChooserUI$DirectoryComboBoxModel::equals(Object$* arg0) {
	return this->$AbstractListModel::equals(arg0);
}

$Object* AquaFileChooserUI$DirectoryComboBoxModel::clone() {
	return this->$AbstractListModel::clone();
}

$String* AquaFileChooserUI$DirectoryComboBoxModel::toString() {
	return this->$AbstractListModel::toString();
}

void AquaFileChooserUI$DirectoryComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void AquaFileChooserUI$DirectoryComboBoxModel::init$($AquaFileChooserUI* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$set(this, fDirectories, $new($Vector));
	this->topIndex = -1;
	this->fPathCount = 0;
	$set(this, fSelectedDirectory, nullptr);
	addItem($($$nc(this$0->getFileChooser())->getCurrentDirectory()));
}

void AquaFileChooserUI$DirectoryComboBoxModel::removeSelectedDirectory() {
	$nc(this->fDirectories)->removeAllElements();
	this->fPathCount = 0;
	$set(this, fSelectedDirectory, nullptr);
}

void AquaFileChooserUI$DirectoryComboBoxModel::addItem($File* directory) {
	$useLocalObjectStack();
	if (directory == nullptr) {
		return;
	}
	if (this->fSelectedDirectory != nullptr) {
		removeSelectedDirectory();
	}
	$var($File, f, $nc(directory)->getAbsoluteFile());
	$var($Vector, path, $new($Vector, 10));
	while ($nc(f)->getParent() != nullptr) {
		path->addElement(f);
		$assign(f, $$nc($$nc(this->this$0->getFileChooser())->getFileSystemView())->createFileObject($(f->getParent())));
	}
	;
	$var($FileArray, roots, $$nc($$nc(this->this$0->getFileChooser())->getFileSystemView())->getRoots());
	{
		$var($FileArray, arr$, roots);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($File, element, arr$->get(i$));
			{
				path->addElement(element);
			}
		}
	}
	this->fPathCount = path->size();
	for (int32_t i = 0; i < path->size(); ++i) {
		$nc(this->fDirectories)->addElement($$cast($File, path->elementAt(i)));
	}
	setSelectedItem($($nc(this->fDirectories)->elementAt(0)));
}

void AquaFileChooserUI$DirectoryComboBoxModel::setSelectedItem(Object$* selectedDirectory) {
	$set(this, fSelectedDirectory, $cast($File, selectedDirectory));
	fireContentsChanged(this, -1, -1);
}

$Object* AquaFileChooserUI$DirectoryComboBoxModel::getSelectedItem() {
	return $of(this->fSelectedDirectory);
}

int32_t AquaFileChooserUI$DirectoryComboBoxModel::getSize() {
	return $nc(this->fDirectories)->size();
}

$Object* AquaFileChooserUI$DirectoryComboBoxModel::getElementAt(int32_t index) {
	return $of($cast($File, $nc(this->fDirectories)->elementAt(index)));
}

AquaFileChooserUI$DirectoryComboBoxModel::AquaFileChooserUI$DirectoryComboBoxModel() {
}

$Class* AquaFileChooserUI$DirectoryComboBoxModel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DirectoryComboBoxModel, this$0)},
		{"fDirectories", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", 0, $field(AquaFileChooserUI$DirectoryComboBoxModel, fDirectories)},
		{"topIndex", "I", nullptr, 0, $field(AquaFileChooserUI$DirectoryComboBoxModel, topIndex)},
		{"fPathCount", "I", nullptr, 0, $field(AquaFileChooserUI$DirectoryComboBoxModel, fPathCount)},
		{"fSelectedDirectory", "Ljava/io/File;", nullptr, 0, $field(AquaFileChooserUI$DirectoryComboBoxModel, fSelectedDirectory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PUBLIC, $method(AquaFileChooserUI$DirectoryComboBoxModel, init$, void, $AquaFileChooserUI*)},
		{"addItem", "(Ljava/io/File;)V", nullptr, 0, $virtualMethod(AquaFileChooserUI$DirectoryComboBoxModel, addItem, void, $File*)},
		{"getElementAt", "(I)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DirectoryComboBoxModel, getElementAt, $Object*, int32_t)},
		{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DirectoryComboBoxModel, getSelectedItem, $Object*)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DirectoryComboBoxModel, getSize, int32_t)},
		{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
		{"removeSelectedDirectory", "()V", nullptr, $PRIVATE, $method(AquaFileChooserUI$DirectoryComboBoxModel, removeSelectedDirectory, void)},
		{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DirectoryComboBoxModel, setSelectedItem, void, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$DirectoryComboBoxModel", "com.apple.laf.AquaFileChooserUI", "DirectoryComboBoxModel", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$DirectoryComboBoxModel",
		"javax.swing.AbstractListModel",
		"javax.swing.ComboBoxModel",
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/AbstractListModel<Ljava/io/File;>;Ljavax/swing/ComboBoxModel<Ljava/io/File;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$DirectoryComboBoxModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$DirectoryComboBoxModel));
	});
	return class$;
}

$Class* AquaFileChooserUI$DirectoryComboBoxModel::class$ = nullptr;

		} // laf
	} // apple
} // com