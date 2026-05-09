#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$MotifDirectoryListModel.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/io/File.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <jcpp.h>

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
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
					namespace motif {

int32_t MotifFileChooserUI$MotifDirectoryListModel::hashCode() {
	return this->$AbstractListModel::hashCode();
}

bool MotifFileChooserUI$MotifDirectoryListModel::equals(Object$* arg0) {
	return this->$AbstractListModel::equals(arg0);
}

$Object* MotifFileChooserUI$MotifDirectoryListModel::clone() {
	return this->$AbstractListModel::clone();
}

$String* MotifFileChooserUI$MotifDirectoryListModel::toString() {
	return this->$AbstractListModel::toString();
}

void MotifFileChooserUI$MotifDirectoryListModel::finalize() {
	this->$AbstractListModel::finalize();
}

void MotifFileChooserUI$MotifDirectoryListModel::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$$nc(this$0->getModel())->addListDataListener(this);
}

int32_t MotifFileChooserUI$MotifDirectoryListModel::getSize() {
	$useLocalObjectStack();
	return $$nc($$nc(this->this$0->getModel())->getDirectories())->size();
}

$Object* MotifFileChooserUI$MotifDirectoryListModel::getElementAt(int32_t index) {
	$useLocalObjectStack();
	return $of($cast($File, $$nc($$nc(this->this$0->getModel())->getDirectories())->elementAt(index)));
}

void MotifFileChooserUI$MotifDirectoryListModel::intervalAdded($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalAdded(this, var$0, e->getIndex1());
}

void MotifFileChooserUI$MotifDirectoryListModel::intervalRemoved($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalRemoved(this, var$0, e->getIndex1());
}

void MotifFileChooserUI$MotifDirectoryListModel::fireContentsChanged() {
	$useLocalObjectStack();
	fireContentsChanged(this, 0, $$nc($$nc(this->this$0->getModel())->getDirectories())->size() - 1);
}

void MotifFileChooserUI$MotifDirectoryListModel::contentsChanged($ListDataEvent* e) {
	fireContentsChanged();
}

MotifFileChooserUI$MotifDirectoryListModel::MotifFileChooserUI$MotifDirectoryListModel() {
}

$Class* MotifFileChooserUI$MotifDirectoryListModel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$MotifDirectoryListModel, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, $PUBLIC, $method(MotifFileChooserUI$MotifDirectoryListModel, init$, void, $MotifFileChooserUI*)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifDirectoryListModel, contentsChanged, void, $ListDataEvent*)},
		{"fireContentsChanged", "()V", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifDirectoryListModel, fireContentsChanged, void)},
		{"getElementAt", "(I)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifDirectoryListModel, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifDirectoryListModel, getSize, int32_t)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifDirectoryListModel, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifDirectoryListModel, intervalRemoved, void, $ListDataEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifDirectoryListModel", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "MotifDirectoryListModel", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifDirectoryListModel",
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
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
	};
	$loadClass(MotifFileChooserUI$MotifDirectoryListModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifFileChooserUI$MotifDirectoryListModel));
	});
	return class$;
}

$Class* MotifFileChooserUI$MotifDirectoryListModel::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com