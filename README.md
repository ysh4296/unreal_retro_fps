# Unreal 5 retro fps 게임 튜토리얼

Unreal Engine 5의 블루프린트 코딩을 전반적으로 활용하여 게임의 기초적인 플레이 환경을 구성하였습니다. 우선 지오메트리 액터를 배치하여 레벨의 기본 구조를 설계하고, 플레이어가 이동하고 상호작용할 수 있는 공간을 직접 구축하였습니다.

또한 플레이어 캐릭터와 무기 시스템을 블루프린트 기반으로 구현하였습니다. 플레이어는 기본적인 이동뿐 아니라 무기를 장착하고 발사할 수 있도록 기능을 확장하였으며, 발사 시 이펙트를 제작하였습니다. 이러한 과정에서 입력 처리, 플립북 애니메이션 연동, 이펙트 트리거와 같은 게임플레이 로직 구현 방법을 익혔습니다.

더 나아가 언리얼의 태그 시스템을 활용하여 무기 스킬 및 공격 동작에 **쿨다운 시스템**을 적용하였습니다. 특정 태그를 부여하고, 해당 태그가 활성화되어 있는 동안에는 스킬을 다시 사용할 수 없도록 제어하는 방식으로, 게임의 밸런스와 플레이 리듬을 조정하는 로직을 직접 경험할 수 있었습니다.

## 플레이어 구현

플레이어 이동 구현


| view | 블루프린트 컴포넌트 | gdscript |
|---|---|---|
|  | <img width="483" height="217" alt="스크린샷 2025-09-15 오후 1 53 28" src="https://github.com/user-attachments/assets/240257c0-c61e-4fa6-a012-aba7f7b7ca71" /> | <img width="484" height="469" alt="스크린샷 2025-09-15 오후 12 35 54" src="https://github.com/user-attachments/assets/0153fc19-495f-40e2-b440-a182fcf5a5f3" /> |

플레이어 item pickup 구현

| 뷰포트 | GameOver | gdscript |
|---|---|---|
| <img width="607" height="426" alt="스크린샷 2025-09-15 오후 12 35 07" src="https://github.com/user-attachments/assets/6d0a5412-8f68-4be0-bb00-aef1bbe626e6" /> | <img width="440" height="364" alt="스크린샷 2025-09-15 오후 12 35 22" src="https://github.com/user-attachments/assets/5e18caf1-efa2-4a15-9202-f7ad9d712c61" /> | <img width="484" height="469" alt="스크린샷 2025-09-15 오후 12 35 54" src="https://github.com/user-attachments/assets/0153fc19-495f-40e2-b440-a182fcf5a5f3" /> |

플레이어 weapon fire 구현

| 뷰포트 | GameOver | gdscript |
|---|---|---|
| <img width="607" height="426" alt="스크린샷 2025-09-15 오후 12 35 07" src="https://github.com/user-attachments/assets/6d0a5412-8f68-4be0-bb00-aef1bbe626e6" /> | <img width="440" height="364" alt="스크린샷 2025-09-15 오후 12 35 22" src="https://github.com/user-attachments/assets/5e18caf1-efa2-4a15-9202-f7ad9d712c61" /> | <img width="484" height="469" alt="스크린샷 2025-09-15 오후 12 35 54" src="https://github.com/user-attachments/assets/0153fc19-495f-40e2-b440-a182fcf5a5f3" /> |
