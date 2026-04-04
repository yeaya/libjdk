#include <javax/swing/plaf/basic/BasicDirectoryModel$DoChangeContents.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicDirectoryModel$DoChangeContents::init$($BasicDirectoryModel* this$0, $List* addFiles, int32_t addStart, $List* remFiles, int32_t remStart, int32_t fid) {
	$set(this, this$0, this$0);
	this->doFire = true;
	this->addStart = 0;
	this->remStart = 0;
	$set(this, addFiles, addFiles);
	this->addStart = addStart;
	$set(this, remFiles, remFiles);
	this->remStart = remStart;
	this->fid = fid;
}

void BasicDirectoryModel$DoChangeContents::cancel() {
	$synchronized(this) {
		this->doFire = false;
	}
}

void BasicDirectoryModel$DoChangeContents::run() {
	$synchronized(this) {
		if ($nc(this->this$0->fetchID)->get() == this->fid && this->doFire) {
			int32_t remSize = (this->remFiles == nullptr) ? 0 : this->remFiles->size();
			int32_t addSize = (this->addFiles == nullptr) ? 0 : this->addFiles->size();
			$synchronized(this->this$0->fileCache) {
				if (remSize > 0) {
					this->this$0->fileCache->removeAll(this->remFiles);
				}
				if (addSize > 0) {
					this->this$0->fileCache->addAll(this->addStart, this->addFiles);
				}
				$set(this->this$0, files, nullptr);
				$set(this->this$0, directories, nullptr);
			}
			if (remSize > 0 && addSize == 0) {
				$BasicDirectoryModel::access$000(this->this$0, this->this$0, this->remStart, this->remStart + remSize - 1);
			} else if (addSize > 0 && remSize == 0 && this->addStart + addSize <= this->this$0->fileCache->size()) {
				$BasicDirectoryModel::access$100(this->this$0, this->this$0, this->addStart, this->addStart + addSize - 1);
			} else {
				this->this$0->fireContentsChanged();
			}
		}
	}
}

BasicDirectoryModel$DoChangeContents::BasicDirectoryModel$DoChangeContents() {
}

$Class* BasicDirectoryModel$DoChangeContents::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDirectoryModel$DoChangeContents, this$0)},
		{"addFiles", "Ljava/util/List;", "Ljava/util/List<Ljava/io/File;>;", $PRIVATE | $FINAL, $field(BasicDirectoryModel$DoChangeContents, addFiles)},
		{"remFiles", "Ljava/util/List;", "Ljava/util/List<Ljava/io/File;>;", $PRIVATE | $FINAL, $field(BasicDirectoryModel$DoChangeContents, remFiles)},
		{"doFire", "Z", nullptr, $PRIVATE, $field(BasicDirectoryModel$DoChangeContents, doFire)},
		{"fid", "I", nullptr, $PRIVATE | $FINAL, $field(BasicDirectoryModel$DoChangeContents, fid)},
		{"addStart", "I", nullptr, $PRIVATE, $field(BasicDirectoryModel$DoChangeContents, addStart)},
		{"remStart", "I", nullptr, $PRIVATE, $field(BasicDirectoryModel$DoChangeContents, remStart)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicDirectoryModel;Ljava/util/List;ILjava/util/List;II)V", "(Ljava/util/List<Ljava/io/File;>;ILjava/util/List<Ljava/io/File;>;II)V", 0, $method(BasicDirectoryModel$DoChangeContents, init$, void, $BasicDirectoryModel*, $List*, int32_t, $List*, int32_t, int32_t)},
		{"cancel", "()V", nullptr, $SYNCHRONIZED, $method(BasicDirectoryModel$DoChangeContents, cancel, void)},
		{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BasicDirectoryModel$DoChangeContents, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicDirectoryModel$DoChangeContents", "javax.swing.plaf.basic.BasicDirectoryModel", "DoChangeContents", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicDirectoryModel$DoChangeContents",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicDirectoryModel"
	};
	$loadClass(BasicDirectoryModel$DoChangeContents, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicDirectoryModel$DoChangeContents);
	});
	return class$;
}

$Class* BasicDirectoryModel$DoChangeContents::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax