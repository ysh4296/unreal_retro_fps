# Unreal 5 retro fps 게임 튜토리얼

Unreal Engine 5의 블루프린트 코딩을 전반적으로 활용하여 게임의 기초적인 플레이 환경을 구성하였습니다. 우선 지오메트리 액터를 배치하여 레벨의 기본 구조를 설계하고, 플레이어가 이동하고 상호작용할 수 있는 공간을 직접 구축하였습니다.

또한 플레이어 캐릭터와 무기 시스템을 블루프린트 기반으로 구현하였습니다. 플레이어는 기본적인 이동뿐 아니라 무기를 장착하고 발사할 수 있도록 기능을 확장하였으며, 발사 시 이펙트를 제작하였습니다. 이러한 과정에서 입력 처리, 플립북 애니메이션 연동, 이펙트 트리거와 같은 게임플레이 로직 구현 방법을 익혔습니다.

더 나아가 언리얼의 태그 시스템을 활용하여 무기 스킬 및 공격 동작에 **쿨다운 시스템**을 적용하였습니다. 특정 태그를 부여하고, 해당 태그가 활성화되어 있는 동안에는 스킬을 다시 사용할 수 없도록 제어하는 방식으로, 게임의 밸런스와 플레이 리듬을 조정하는 로직을 직접 경험할 수 있었습니다.

## 플레이어 구현

플레이어 이동 구현


| view | 블루프린트 컴포넌트 | 노드 |
|---|---|---|
| ![move](https://github.com/user-attachments/assets/16f79245-4b7f-4c13-a29b-79ad056cd717) | <img width="483" height="217" alt="스크린샷 2025-09-15 오후 1 53 28" src="https://github.com/user-attachments/assets/240257c0-c61e-4fa6-a012-aba7f7b7ca71" /> | <img width="480" height="331" alt="스크린샷 2025-09-15 오후 1 58 30" src="https://github.com/user-attachments/assets/5e5d9484-aa8c-4271-93f4-f1b02090814b" /> |

플레이어 item pickup 구현

| 뷰포트 | 블루프린트 컴포넌트 |
|---|---|
| ![pickup](https://github.com/user-attachments/assets/a49a52a0-6c4c-4f0a-a490-4dc328c8428a) | <img width="303" height="194" alt="스크린샷 2025-09-15 오후 2 06 27" src="https://github.com/user-attachments/assets/9beb9e61-523c-4378-a899-a7df1344895a" /> | 

플레이어 weapon fire 구현

| 뷰포트 |  그래프 노드 |
|---|---|
| ![fire](https://github.com/user-attachments/assets/acfb7a92-cb06-4d3a-815f-c19c5f8d54a8) | <img width="729" height="176" alt="스크린샷 2025-09-15 오후 2 17 21" src="https://github.com/user-attachments/assets/e84e8e9d-b929-48aa-a161-174952964821" /> |




