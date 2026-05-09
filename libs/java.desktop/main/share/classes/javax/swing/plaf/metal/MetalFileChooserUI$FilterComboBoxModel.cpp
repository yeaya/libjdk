#include <javax/swing/plaf/metal/MetalFileChooserUI$FilterComboBoxModel.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

#undef CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY
#undef FILE_FILTER_CHANGED_PROPERTY

using $FileFilterArray = $Array<::javax::swing::filechooser::FileFilter>;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalFileChooserUI$FilterComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void MetalFileChooserUI$FilterComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t MetalFileChooserUI$FilterComboBoxModel::hashCode() {
	return this->$AbstractListModel::hashCode();
}

bool MetalFileChooserUI$FilterComboBoxModel::equals(Object$* arg0) {
	return this->$AbstractListModel::equals(arg0);
}

$Object* MetalFileChooserUI$FilterComboBoxModel::clone() {
	return this->$AbstractListModel::clone();
}

$String* MetalFileChooserUI$FilterComboBoxModel::toString() {
	return this->$AbstractListModel::toString();
}

void MetalFileChooserUI$FilterComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void MetalFileChooserUI$FilterComboBoxModel::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$set(this, filters, $$nc(this$0->getFileChooser())->getChoosableFileFilters());
}

void MetalFileChooserUI$FilterComboBoxModel::propertyChange($PropertyChangeEvent* e) {
	$var($String, prop, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if (prop == $JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY) {
		$set(this, filters, $cast($FileFilterArray, e->getNewValue()));
		fireContentsChanged(this, -1, -1);
	} else if (prop == $JFileChooser::FILE_FILTER_CHANGED_PROPERTY) {
		fireContentsChanged(this, -1, -1);
	}
}

void MetalFileChooserUI$FilterComboBoxModel::setSelectedItem(Object$* filter) {
	if (filter != nullptr) {
		$$nc(this->this$0->getFileChooser())->setFileFilter($cast($FileFilter, filter));
		fireContentsChanged(this, -1, -1);
	}
}

$Object* MetalFileChooserUI$FilterComboBoxModel::getSelectedItem() {
	$useLocalObjectStack();
	$var($FileFilter, currentFilter, $$nc(this->this$0->getFileChooser())->getFileFilter());
	bool found = false;
	if (currentFilter != nullptr) {
		{
			$var($FileFilterArray, arr$, this->filters);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($FileFilter, filter, arr$->get(i$));
				if (filter == currentFilter) {
					found = true;
				}
			}
		}
		if (found == false) {
			$$nc(this->this$0->getFileChooser())->addChoosableFileFilter(currentFilter);
		}
	}
	return $$nc(this->this$0->getFileChooser())->getFileFilter();
}

int32_t MetalFileChooserUI$FilterComboBoxModel::getSize() {
	if (this->filters != nullptr) {
		return this->filters->length;
	} else {
		return 0;
	}
}

$Object* MetalFileChooserUI$FilterComboBoxModel::getElementAt(int32_t index) {
	if (index > getSize() - 1) {
		return $$nc(this->this$0->getFileChooser())->getFileFilter();
	}
	if (this->filters != nullptr) {
		return this->filters->get(index);
	} else {
		return nullptr;
	}
}

MetalFileChooserUI$FilterComboBoxModel::MetalFileChooserUI$FilterComboBoxModel() {
}

$Class* MetalFileChooserUI$FilterComboBoxModel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$FilterComboBoxModel, this$0)},
		{"filters", "[Ljavax/swing/filechooser/FileFilter;", nullptr, $PROTECTED, $field(MetalFileChooserUI$FilterComboBoxModel, filters)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, $PROTECTED, $method(MetalFileChooserUI$FilterComboBoxModel, init$, void, $MetalFileChooserUI*)},
		{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalFileChooserUI$FilterComboBoxModel, getElementAt, $Object*, int32_t)},
		{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalFileChooserUI$FilterComboBoxModel, getSelectedItem, $Object*)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(MetalFileChooserUI$FilterComboBoxModel, getSize, int32_t)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalFileChooserUI$FilterComboBoxModel, propertyChange, void, $PropertyChangeEvent*)},
		{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
		{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MetalFileChooserUI$FilterComboBoxModel, setSelectedItem, void, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxModel", "javax.swing.plaf.metal.MetalFileChooserUI", "FilterComboBoxModel", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxModel",
		"javax.swing.AbstractListModel",
		"javax.swing.ComboBoxModel,java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/AbstractListModel<Ljava/lang/Object;>;Ljavax/swing/ComboBoxModel<Ljava/lang/Object;>;Ljava/beans/PropertyChangeListener;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalFileChooserUI"
	};
	$loadClass(MetalFileChooserUI$FilterComboBoxModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalFileChooserUI$FilterComboBoxModel));
	});
	return class$;
}

$Class* MetalFileChooserUI$FilterComboBoxModel::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax