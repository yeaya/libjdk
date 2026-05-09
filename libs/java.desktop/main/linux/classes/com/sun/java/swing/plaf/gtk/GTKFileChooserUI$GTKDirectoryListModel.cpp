#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKDirectoryListModel.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/io/File.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

int32_t GTKFileChooserUI$GTKDirectoryListModel::hashCode() {
	return this->$AbstractListModel::hashCode();
}

bool GTKFileChooserUI$GTKDirectoryListModel::equals(Object$* arg0) {
	return this->$AbstractListModel::equals(arg0);
}

$Object* GTKFileChooserUI$GTKDirectoryListModel::clone() {
	return this->$AbstractListModel::clone();
}

$String* GTKFileChooserUI$GTKDirectoryListModel::toString() {
	return this->$AbstractListModel::toString();
}

void GTKFileChooserUI$GTKDirectoryListModel::finalize() {
	this->$AbstractListModel::finalize();
}

void GTKFileChooserUI$GTKDirectoryListModel::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$$nc(this$0->getModel())->addListDataListener(this);
	directoryChanged();
}

int32_t GTKFileChooserUI$GTKDirectoryListModel::getSize() {
	$useLocalObjectStack();
	return $$nc($$nc(this->this$0->getModel())->getDirectories())->size() + 1;
}

$Object* GTKFileChooserUI$GTKDirectoryListModel::getElementAt(int32_t index) {
	$useLocalObjectStack();
	return $of(index > 0 ? $cast($File, $$nc($$nc(this->this$0->getModel())->getDirectories())->elementAt(index - 1)) : this->curDir);
}

void GTKFileChooserUI$GTKDirectoryListModel::intervalAdded($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalAdded(this, var$0, e->getIndex1());
}

void GTKFileChooserUI$GTKDirectoryListModel::intervalRemoved($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalRemoved(this, var$0, e->getIndex1());
}

void GTKFileChooserUI$GTKDirectoryListModel::fireContentsChanged() {
	$useLocalObjectStack();
	fireContentsChanged(this, 0, $$nc($$nc(this->this$0->getModel())->getDirectories())->size() - 1);
}

void GTKFileChooserUI$GTKDirectoryListModel::contentsChanged($ListDataEvent* e) {
	fireContentsChanged();
}

void GTKFileChooserUI$GTKDirectoryListModel::directoryChanged() {
	$useLocalObjectStack();
	$set(this, curDir, $$nc($$nc(this->this$0->getFileChooser())->getFileSystemView())->createFileObject($($$nc(this->this$0->getFileChooser())->getCurrentDirectory()), "."_s));
}

GTKFileChooserUI$GTKDirectoryListModel::GTKFileChooserUI$GTKDirectoryListModel() {
}

$Class* GTKFileChooserUI$GTKDirectoryListModel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$GTKDirectoryListModel, this$0)},
		{"curDir", "Ljava/io/File;", nullptr, 0, $field(GTKFileChooserUI$GTKDirectoryListModel, curDir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PUBLIC, $method(GTKFileChooserUI$GTKDirectoryListModel, init$, void, $GTKFileChooserUI*)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKDirectoryListModel, contentsChanged, void, $ListDataEvent*)},
		{"directoryChanged", "()V", nullptr, $PRIVATE, $method(GTKFileChooserUI$GTKDirectoryListModel, directoryChanged, void)},
		{"fireContentsChanged", "()V", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKDirectoryListModel, fireContentsChanged, void)},
		{"getElementAt", "(I)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKDirectoryListModel, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKDirectoryListModel, getSize, int32_t)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKDirectoryListModel, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKDirectoryListModel, intervalRemoved, void, $ListDataEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryListModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKDirectoryListModel", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryListModel",
		"javax.swing.AbstractListModel",
		"javax.swing.event.ListDataListener",
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/AbstractListModel<Ljava/io/File;>;Ljavax/swing/event/ListDataListener;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
	};
	$loadClass(GTKFileChooserUI$GTKDirectoryListModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKFileChooserUI$GTKDirectoryListModel));
	});
	return class$;
}

$Class* GTKFileChooserUI$GTKDirectoryListModel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com