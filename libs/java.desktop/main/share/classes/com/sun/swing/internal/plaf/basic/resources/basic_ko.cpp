#include <com/sun/swing/internal/plaf/basic/resources/basic_ko.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace basic {
						namespace resources {

void basic_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* basic_ko::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AbstractButton.click.textAndMnemonic"_s,
			u"누르기"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.addition.textAndMnemonic"_s,
			u"추가"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.deletion.textAndMnemonic"_s,
			u"삭제"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.redo.textAndMnemonic"_s,
			u"재실행"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.styleChange.textAndMnemonic"_s,
			u"스타일 변경"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.undo.textAndMnemonic"_s,
			u"실행 취소"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.redo.textAndMnemonic"_s,
			u"재실행"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.undo.textAndMnemonic"_s,
			u"실행 취소"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cancel.textAndMnemonic"_s,
			u"취소"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmyk.textAndMnemonic"_s,
			"C&MYK"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykAlpha.textAndMnemonic"_s,
			u"알파"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykBlack.textAndMnemonic"_s,
			u"검정색"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykCyan.textAndMnemonic"_s,
			u"청록색"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykMagenta.textAndMnemonic"_s,
			u"진홍색"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykYellow.textAndMnemonic"_s,
			u"노란색"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsl.textAndMnemonic"_s,
			"HSL(&L)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslHue.textAndMnemonic"_s,
			u"색조"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslLightness.textAndMnemonic"_s,
			u"밝기"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslSaturation.textAndMnemonic"_s,
			u"채도"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslTransparency.textAndMnemonic"_s,
			u"투명"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsv.textAndMnemonic"_s,
			"HSV(&H)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvHue.textAndMnemonic"_s,
			u"색조"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvSaturation.textAndMnemonic"_s,
			u"채도"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvTransparency.textAndMnemonic"_s,
			u"투명"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvValue.textAndMnemonic"_s,
			u"값"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.ok.textAndMnemonic"_s,
			u"확인"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.preview.textAndMnemonic"_s,
			u"미리보기"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.reset.textAndMnemonic"_s,
			u"재설정(&R)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgb.textAndMnemonic"_s,
			"RGB(&G)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbAlpha.textAndMnemonic"_s,
			u"알파"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbBlue.textAndMnemonic"_s,
			u"파란색(&B)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbGreen.textAndMnemonic"_s,
			u"녹색(&N)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbHexCode.textAndMnemonic"_s,
			u"색상 코드(&C)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbRed.textAndMnemonic"_s,
			u"빨간색(&D)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.sample.textAndMnemonic"_s,
			u"샘플 텍스트  샘플 텍스트"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatches.textAndMnemonic"_s,
			u"견본(&S)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatchesRecent.textAndMnemonic"_s,
			u"최근 목록:"_s
		}),
		$$new($ObjectArray, {
			"ComboBox.togglePopup.textAndMnemonic"_s,
			"togglePopup"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			u"모든 파일"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			u"취소"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButtonToolTip.textAndMnemonic"_s,
			u"파일 선택기 대화상자 중단"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryDescription.textAndMnemonic"_s,
			u"디렉토리"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButton.textAndMnemonic"_s,
			u"열기"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButtonToolTip.textAndMnemonic"_s,
			u"선택된 디렉토리 열기"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDescription.textAndMnemonic"_s,
			u"일반 파일"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeGigaBytes"_s,
			"{0} GB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeKiloBytes"_s,
			"{0} KB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeMegaBytes"_s,
			"{0} MB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesDetailsAccessibleName"_s,
			u"파일 세부정보"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesListAccessibleName"_s,
			u"파일 목록"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			u"도움말(&H)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButtonToolTip.textAndMnemonic"_s,
			u"FileChooser 도움말"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderError.textAndMnemonic"_s,
			u"새 폴더를 생성하는 중 오류가 발생했습니다."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderErrorSeparator"_s,
			":"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderParentDoesntExist.textAndMnemonic"_s,
			u"폴더를 생성할 수 없습니다.\n\n시스템에서 지정된 경로를 찾을 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderParentDoesntExistTitle.textAndMnemonic"_s,
			u"폴더를 생성할 수 없음"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			u"열기"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			u"선택된 파일 열기"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			u"열기"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.other.newFolder"_s,
			"NewFolder"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.other.newFolder.subsequent"_s,
			"NewFolder.{0}"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameError.textAndMnemonic"_s,
			u"{0}의 이름을 바꿀 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameErrorFileExists.textAndMnemonic"_s,
			u"{0}의 이름을 바꿀 수 없음: 지정한 이름을 사용하는 파일이 존재합니다. 다른 파일 이름을 지정하십시오."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameErrorTitle.textAndMnemonic"_s,
			u"파일 또는 폴더 이름 바꾸는 중 오류 발생"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			u"저장"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			u"선택된 파일 저장"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			u"저장"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButton.textAndMnemonic"_s,
			u"업데이트(&U)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButtonToolTip.textAndMnemonic"_s,
			u"디렉토리 목록 업데이트"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.win32.newFolder"_s,
			u"새 폴더"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.win32.newFolder.subsequent"_s,
			u"새 폴더({0})"_s
		}),
		$$new($ObjectArray, {
			"FormView.browseFileButton.textAndMnemonic"_s,
			u"찾아보기..."_s
		}),
		$$new($ObjectArray, {
			"FormView.resetButton.textAndMnemonic"_s,
			u"재설정"_s
		}),
		$$new($ObjectArray, {
			"FormView.submitButton.textAndMnemonic"_s,
			u"질의 제출"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.closeButtonToolTip"_s,
			u"닫기"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.iconButtonToolTip"_s,
			u"최소화"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.maxButtonToolTip"_s,
			u"최대화"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.restoreButtonToolTip"_s,
			u"복원"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButton.textAndMnemonic"_s,
			u"닫기(&C)"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButtonAccessibleName"_s,
			u"닫기"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.iconifyButtonAccessibleName"_s,
			u"아이콘화"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s,
			u"최대화(&X)"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButtonAccessibleName"_s,
			u"최대화"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s,
			u"최소화(&N)"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.moveButton.textAndMnemonic"_s,
			u"이동(&M)"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.restoreButton.textAndMnemonic"_s,
			u"복원(&R)"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.sizeButton.textAndMnemonic"_s,
			u"크기(&S)"_s
		}),
		$$new($ObjectArray, {
			"IsindexView.prompt"_s,
			u"다음은 검색 가능한 인덱스입니다. 검색 키워드 입력:"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.cancelButton.textAndMnemonic"_s,
			u"취소"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.inputDialog.titleAndMnemonic"_s,
			u"입력"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.messageDialog.titleAndMnemonic"_s,
			u"메시지"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.noButton.textAndMnemonic"_s,
			u"아니오(&N)"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.okButton.textAndMnemonic"_s,
			u"확인"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.title.textAndMnemonic"_s,
			u"옵션 선택"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.yesButton.textAndMnemonic"_s,
			u"예(&Y)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButton.textAndMnemonic"_s,
			u"중단(&A)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButtonToolTip.textAndMnemonic"_s,
			u"인쇄 중단"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentAborting.textAndMnemonic"_s,
			u"인쇄 중단 중..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentInitial.textAndMnemonic"_s,
			u"인쇄 진행 중..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentProgress.textAndMnemonic"_s,
			u"인쇄된 페이지 {0}..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleAborting.textAndMnemonic"_s,
			u"인쇄(중단 중)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleProgress.textAndMnemonic"_s,
			u"인쇄"_s
		}),
		$$new($ObjectArray, {
			"ProgressMonitor.progress.textAndMnemonic"_s,
			u"진행..."_s
		}),
		$$new($ObjectArray, {
			"SplitPane.leftButton.textAndMnemonic"_s,
			u"왼쪽 단추"_s
		}),
		$$new($ObjectArray, {
			"SplitPane.rightButton.textAndMnemonic"_s,
			u"오른쪽 단추"_s
		})
	});
}

basic_ko::basic_ko() {
}

$Class* basic_ko::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(basic_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(basic_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.swing.internal.plaf.basic.resources.basic_ko",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(basic_ko, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(basic_ko);
	});
	return class$;
}

$Class* basic_ko::class$ = nullptr;

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com