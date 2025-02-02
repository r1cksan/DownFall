using UnityEngine;

/// <summary>
/// シングルトン用ベースクラス
/// </summary>
/// <typeparam name="T">シングルトン対象クラス</typeparam>
public class SingletonPhotonMonoBehaviour<T> : Photon.PunBehaviour where T : MonoBehaviour {

	protected static T instance;
	public static T Instance {
		get {
			return instance ?? (instance = FindObjectOfType<T>());
		}
	}

	protected virtual void Awake() {
		if (instance == null) {
			instance = FindObjectOfType<T>();
		} else if (instance != this) {
			Destroy(this.gameObject);
		}
	}

	protected bool IsExistsInstance() {
		return FindObjectOfType<T>() != null;
	}

}
