#include <com/apple/laf/AquaFileSystemModel$DoChangeContents.h>
#include <com/apple/laf/AquaFileSystemModel$SortableFile.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $AquaFileSystemModel$SortableFile = ::com::apple::laf::AquaFileSystemModel$SortableFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileSystemModel$DoChangeContents::init$($AquaFileSystemModel* this$0, $Vector* files, int32_t fid) {
	$set(this, this$0, this$0);
	this->doFire = true;
	$set(this, lock, $new($Object));
	$set(this, contentFiles, files);
	this->fid = fid;
}

void AquaFileSystemModel$DoChangeContents::cancel() {
	$synchronized(this) {
		$synchronized(this->lock) {
			this->doFire = false;
		}
	}
}

void AquaFileSystemModel$DoChangeContents::run() {
	$useLocalObjectStack();
	if (this->this$0->fetchID == this->fid) {
		$synchronized(this->lock) {
			if (this->doFire) {
				$synchronized(this->this$0->fileCacheLock) {
					if (this->this$0->fileCache != nullptr) {
						for (int32_t i = 0; i < $nc(this->contentFiles)->size(); ++i) {
							$nc(this->this$0->fileCache)->addElement($$cast($AquaFileSystemModel$SortableFile, this->contentFiles->elementAt(i)));
							this->this$0->fireTableRowsInserted(i, i);
						}
					}
				}
			}
			$set(this, contentFiles, nullptr);
			$set(this->this$0, directories, nullptr);
		}
	}
}

AquaFileSystemModel$DoChangeContents::AquaFileSystemModel$DoChangeContents() {
}

$Class* AquaFileSystemModel$DoChangeContents::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileSystemModel$DoChangeContents, this$0)},
		{"contentFiles", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/apple/laf/AquaFileSystemModel$SortableFile;>;", $PRIVATE, $field(AquaFileSystemModel$DoChangeContents, contentFiles)},
		{"doFire", "Z", nullptr, $PRIVATE, $field(AquaFileSystemModel$DoChangeContents, doFire)},
		{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AquaFileSystemModel$DoChangeContents, lock)},
		{"fid", "I", nullptr, $PRIVATE | $FINAL, $field(AquaFileSystemModel$DoChangeContents, fid)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileSystemModel;Ljava/util/Vector;I)V", "(Ljava/util/Vector<Lcom/apple/laf/AquaFileSystemModel$SortableFile;>;I)V", $PUBLIC, $method(AquaFileSystemModel$DoChangeContents, init$, void, $AquaFileSystemModel*, $Vector*, int32_t)},
		{"cancel", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(AquaFileSystemModel$DoChangeContents, cancel, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AquaFileSystemModel$DoChangeContents, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileSystemModel$DoChangeContents", "com.apple.laf.AquaFileSystemModel", "DoChangeContents", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileSystemModel$DoChangeContents",
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
		"com.apple.laf.AquaFileSystemModel"
	};
	$loadClass(AquaFileSystemModel$DoChangeContents, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileSystemModel$DoChangeContents);
	});
	return class$;
}

$Class* AquaFileSystemModel$DoChangeContents::class$ = nullptr;

		} // laf
	} // apple
} // com